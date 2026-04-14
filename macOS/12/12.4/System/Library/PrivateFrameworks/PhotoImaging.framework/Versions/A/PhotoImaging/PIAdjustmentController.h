@class NSString, NSDictionary, NUIdentifier, NUAdjustment, NSArray, NSMutableDictionary;

@interface PIAdjustmentController : NSObject {
    NSMutableDictionary *_changes;
}

@property (readonly, nonatomic) NSDictionary *settings;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NUIdentifier *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NUAdjustment *adjustment;
@property (readonly, nonatomic) NSArray *inputKeys;
@property (readonly, nonatomic) NSArray *displayInputKeys;
@property (readonly, nonatomic) BOOL canBeEnabled;

+ (id)enabledKey;
+ (id)autoKey;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (BOOL)_isDefault;
- (id)initWithAdjustment:(id)a0;
- (BOOL)isAuto;
- (BOOL)isEqual:(id)a0 forKeys:(id)a1;
- (id)settingForKey:(id)a0;
- (BOOL)isSettingEqual:(id)a0 forKey:(id)a1;
- (BOOL)isEqual:(id)a0 visualChangesOnly:(BOOL)a1;
- (BOOL)hasInputKey:(id)a0;
- (BOOL)hasAutoKeyInSchema;
- (BOOL)canHaveAuto;
- (void)_setPrimitiveValue:(id)a0 forKey:(id)a1;
- (id)_primitiveValueForKey:(id)a0;
- (void)setFromAdjustment:(id)a0;
- (BOOL)isEqualToAdjustmentController:(id)a0;
- (id)visualInputKeys;
- (void)setIsAuto:(BOOL)a0;
- (id)valuesForArrayInputKey:(id)a0;
- (void)interpolateFromStart:(id)a0 toEnd:(id)a1 progress:(double)a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeFromInputKey:(id)a0 timescaleKey:(id)a1;

@end
