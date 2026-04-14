@class NSNumber, NSString;

@interface MTREnergyPreferenceClusterBalanceStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *step;
@property (copy, nonatomic) NSString *label;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
