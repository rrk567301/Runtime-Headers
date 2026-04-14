@class NSNumber;

@interface HDWatchSettingValues : NSObject

@property (readonly, copy, nonatomic) NSNumber *featureSettingEnabledValue;
@property (readonly, copy, nonatomic) NSNumber *defaultsEnabledValue;
@property (readonly, copy, nonatomic) NSNumber *lastReconciledEnabledValue;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithFeatureSettingEnabledValue:(id)a0 defaultsEnabledValue:(id)a1 lastReconciledEnabledValue:(id)a2;
- (id)reconciledEnabledValue;

@end
