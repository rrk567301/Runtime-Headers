@class NSArray, NSDictionary, NSString;

@interface WLKAMSMediaProxy : NSObject

@property (readonly, nonatomic) NSArray *buyParameters;
@property (nonatomic) BOOL hasInAppPurchases;
@property (readonly, nonatomic) NSDictionary *contentRatingsBySystemDictionary;
@property (readonly, nonatomic) NSString *subtitle;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)_initializeProperties:(id)a0;

@end
