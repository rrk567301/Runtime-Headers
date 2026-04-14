@class NSNumber, NSDictionary;

@interface VCRateControlServerBag : NSObject {
    NSNumber *_experimentGroupIndex;
    NSDictionary *_serverBagDict;
    int _operatingMode;
}

@property (readonly) int experimentVersion;
@property (readonly) NSNumber *experimentGroupIndex;

+ (id)profileNumberKeyWithMode:(int)a0;
+ (id)keysWithMode:(int)a0;
+ (id)groupKeysWithMode:(int)a0 primaryKey:(id)a1;
+ (id)prefixForMode:(int)a0;

- (void)dealloc;
- (BOOL)containsAllSecondaryKeysWithPrimaryKey:(id)a0;
- (id)valueForSecondaryKeyWithPrimaryKey:(id)a0 secondaryKey:(id)a1 type:(int)a2;
- (id)initWithMode:(int)a0 serverBagDict:(id)a1;
- (id)getExperimentConfig:(unsigned char)a0 defaultValue:(id)a1;
- (id)getExperimentValueForKey:(id)a0;
- (id)valueForType:(int)a0 value:(id)a1;

@end
