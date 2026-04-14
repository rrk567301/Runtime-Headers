@class NSString;

@interface _EXPersona : NSObject

@property (readonly, nonatomic) NSString *personaUniqueString;

+ (id)currentPersona;
+ (id)personaWithPersonaUniqueString:(id)a0;
+ (id)defaultPersona;

- (void).cxx_destruct;
- (id)initWithPersonaUniqueString:(id)a0;

@end
