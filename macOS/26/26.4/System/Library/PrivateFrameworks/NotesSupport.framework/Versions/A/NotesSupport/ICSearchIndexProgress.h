@class NSString;

@interface ICSearchIndexProgress : NSObject

@property (nonatomic, readonly) long long totalItemCount;
@property (nonatomic) long long pendingItemCount;
@property (nonatomic) long long completedItemCount;
@property (nonatomic, readonly) NSString *description;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithPending:(long long)a0 completed:(long long)a1;

@end
