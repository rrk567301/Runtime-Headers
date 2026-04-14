@interface ACSHActionScroll : ACSHAction

@property (nonatomic) long long scrollSpeed;
@property (nonatomic) unsigned long long scrollDirection;

+ (id)actionWithDirection:(unsigned long long)a0 speed:(long long)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
