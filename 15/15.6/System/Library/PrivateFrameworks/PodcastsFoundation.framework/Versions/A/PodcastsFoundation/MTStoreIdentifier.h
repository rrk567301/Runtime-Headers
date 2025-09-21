@class NSNumber, NSString;

@interface MTStoreIdentifier : NSObject

@property (retain, nonatomic) NSNumber *storeIdentifier;
@property (retain, nonatomic) NSString *feedUrl;

+ (char)isEmpty:(long long)a0;
+ (long long)adamIdFromSerpentId:(long long)a0;
+ (id)adamIdNumberFromStoreId:(long long)a0;
+ (id)identifierWithFeedUrl:(id)a0;
+ (id)identifierWithFeedUrl:(id)a0 storeIdentifier:(id)a1;
+ (char)isEmptyNumber:(id)a0;
+ (char)isNotEmpty:(long long)a0;
+ (char)isNotEmptyNumber:(id)a0;
+ (long long)serpentIdFromAdamId:(long long)a0;
+ (id)validatedIdNumberFromStoreId:(long long)a0;

- (void).cxx_destruct;
- (id)initWithFeedUrl:(id)a0;
- (id)initWithFeedUrl:(id)a0 storeIdentifier:(id)a1;

@end
