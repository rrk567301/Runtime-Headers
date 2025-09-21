@class NSDictionary;

@interface NTCatchUpOperationForYouFetchInfo : NSObject <NSCopying>

@property (readonly, nonatomic) char attemptedCachedOnly;
@property (readonly, copy, nonatomic) NSDictionary *feedContextByFeedID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAttemptedCachedOnly:(char)a0 feedContextByFeedID:(id)a1;

@end
