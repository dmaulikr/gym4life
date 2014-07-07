//
//  G4LSeries.h
//  gym4life
//
//  Created by willie santos on 29/05/14.
//  Copyright (c) 2014 willie santos. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface G4LSeries : NSObject
{
}

@property (nonatomic) NSString *nome;
@property (nonatomic) NSMutableArray *exercicios;

+(G4LSeries *) serieEscolhida;
+(void) setNumSerie:(int)nroSerie;
+(int) numSerie;
+(void) setSerieClicada:(int)indexSerie;
+(int) serieClicada;
+(void) setIndexSerieEscolhida:(int)indexSerie;
+(int) indexSerieEscolhida;

@end
