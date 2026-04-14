@class NSString;

@interface HDWatchSettingKeys : NSObject

@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, copy, nonatomic) NSString *featureSettingEnabledKey;
@property (readonly, copy, nonatomic) NSString *defaultsEnabledKey;
@property (readonly, copy, nonatomic) NSString *lastReconciledEnabledKey;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFeatureIdentifier:(id)a0 defaultsEnabledKey:(id)a1;
- (id)initWithFeatureIdentifier:(id)a0 featureSettingEnabledKey:(id)a1 defaultsEnabledKey:(id)a2 lastReconciledEnabledKey:(id)a3;

@end
