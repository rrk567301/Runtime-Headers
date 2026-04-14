@class NSString, NSMutableDictionary;

@interface ExtraClip : KonaClip

@property (readonly, retain, nonatomic) NSMutableDictionary *extraDefinition;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) double startRatio;
@property (nonatomic) double endRatio;

- (int)maxDuration;
- (int)clipType;
- (BOOL)hasVisualCharacteristic;

@end
