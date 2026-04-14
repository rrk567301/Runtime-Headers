@class NSNumber, NSDictionary;

@interface VCRateControlServerBag : NSObject {
    NSNumber *_experimentGroupIndex;
    NSDictionary *_serverBagDict;
    int _operatingMode;
    BOOL _experimentEnabled;
}

@property (readonly) int experimentVersion;
@property (readonly, retain) NSNumber *experimentGroupIndex;

+ (id)keysWithMode:(int)a0;
+ (id)profileNumberKeyWithMode:(int)a0;
+ (id)groupKeysWithMode:(int)a0 primaryKey:(id)a1;
+ (id)prefixForMode:(int)a0;

- (void)dealloc;
- (id)initWithMode:(int)a0 serverBagDict:(id)a1;
- (BOOL)containsAllSecondaryKeysWithPrimaryKey:(id)a0;
- (id)valueForType:(int)a0 value:(id)a1;
- (id)valueForSecondaryKeyWithPrimaryKey:(id)a0 secondaryKey:(id)a1 type:(int)a2;
- (id)getExperimentConfig:(unsigned char)a0 defaultValue:(id)a1;
- (id)getExperimentValueForKey:(id)a0;

@end
