@class NSString;

@interface STUsageDetailItem : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly) char isAllAppsOrCategories;
@property long long type;
@property (nonatomic) float quantity;
@property (readonly) float sortQuantity;
@property (readonly) char usageTrusted;

+ (id)keyPathsForValuesAffectingIsAllAppsOrCategories;
+ (id)keyPathsForValuesAffectingSortQuantity;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 identifier:(id)a1;
- (id)initWithType:(long long)a0 identifier:(id)a1 usageTrusted:(char)a2;

@end
