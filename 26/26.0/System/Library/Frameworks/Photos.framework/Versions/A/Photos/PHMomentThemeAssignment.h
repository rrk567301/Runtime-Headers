@class NSString, NSNumber;

@interface PHMomentThemeAssignment : NSObject

@property (readonly, copy, nonatomic) NSString *themeName;
@property (readonly, copy, nonatomic) NSNumber *confidence;
@property (readonly, nonatomic) long long adapterVersion;
@property (readonly, nonatomic) long long uemVersion;

- (void).cxx_destruct;
- (id)initWithThemeName:(id)a0 confidence:(id)a1 adapterVersion:(long long)a2 uemVersion:(long long)a3;

@end
