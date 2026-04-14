@class NSString, NSNumber;

@interface PLMomentThemeAssignment : NSObject

@property (readonly, copy, nonatomic) NSString *themeName;
@property (readonly, nonatomic) long long adapterVersion;
@property (readonly, nonatomic) long long uemVersion;
@property (readonly, copy, nonatomic) NSNumber *confidence;

- (void).cxx_destruct;
- (id)initWithThemeName:(id)a0 adapterVersion:(long long)a1 uemVersion:(long long)a2 confidence:(id)a3;

@end
