//
//  G4LViewConfig.h
//  viewConfiguracao
//
//  Created by willie santos on 02/06/14.
//  Copyright (c) 2014 willie santos. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface G4LViewConfig : UIViewController{
    
    int horaI,minutoI;
    
}

@property (weak, nonatomic) IBOutlet UISwitch *segunda;
@property (weak, nonatomic) IBOutlet UISwitch *terca;
@property (weak, nonatomic) IBOutlet UISwitch *quarta;
@property (weak, nonatomic) IBOutlet UISwitch *quinta;
@property (weak, nonatomic) IBOutlet UISwitch *sexta;
@property (weak, nonatomic) IBOutlet UISwitch *sabado;
@property (weak, nonatomic) IBOutlet UISwitch *domingo;
@property (weak, nonatomic) IBOutlet UILabel *horaMarcada;
@property (nonatomic) NSString * strHorario;


- (IBAction)Salvar:(id)sender;
//- (IBAction)series:(id)sender;
- (IBAction)horarioSeries:(id)sender;
- (void)alertaMessagem:(UISwitch *)sender andDay:(int)day;

@end
