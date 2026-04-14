@class NSDictionary;

@interface NTCatchUpOperationForYouFetchInfo : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL attemptedCachedOnly;
@property (readonly, copy, nonatomic) NSDictionary *feedContextByFeedID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAttemptedCachedOnly:(BOOL)a0 feedContextByFeedID:(id)a1;

@end
