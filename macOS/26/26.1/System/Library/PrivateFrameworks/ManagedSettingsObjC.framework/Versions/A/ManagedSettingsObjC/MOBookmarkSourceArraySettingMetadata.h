@class NSArray;

@interface MOBookmarkSourceArraySettingMetadata : MOArraySettingMetadata

@property (readonly, nonatomic) NSArray *defaultValue;

- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;
- (id)_combine:(id)a0 with:(id)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (void)reduceValues:(id)a0 intoExistingValues:(id)a1;

@end
