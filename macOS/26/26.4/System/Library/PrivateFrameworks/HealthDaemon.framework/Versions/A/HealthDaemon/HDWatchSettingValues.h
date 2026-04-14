@class NSNumber;

@interface HDWatchSettingValues : NSObject

@property (readonly, copy, nonatomic) NSNumber *featureSettingEnabledValue;
@property (readonly, copy, nonatomic) NSNumber *defaultsEnabledValue;
@property (readonly, copy, nonatomic) NSNumber *lastReconciledEnabledValue;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFeatureSettingEnabledValue:(id)a0 defaultsEnabledValue:(id)a1 lastReconciledEnabledValue:(id)a2;
- (id)reconciledEnabledValue;

@end
