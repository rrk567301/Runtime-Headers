@class FCFeedRange, NSString, FCFeedItemFeature, FCFeedContext;

@interface FCFeedRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *feedID;
@property (readonly, copy, nonatomic) FCFeedRange *feedRange;
@property (readonly, nonatomic) unsigned long long maxCount;
@property (readonly, nonatomic) BOOL hasMaxCount;
@property (readonly, nonatomic) BOOL isExpendable;
@property (readonly, nonatomic) BOOL cachedOnly;
@property (readonly, copy, nonatomic) FCFeedContext *feedContext;
@property (readonly, copy, nonatomic) FCFeedItemFeature *requiredFeature;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithFeedID:(id)a0 feedRange:(id)a1 maxCount:(unsigned long long)a2 isExpendable:(BOOL)a3 cachedOnly:(BOOL)a4 feedContext:(id)a5 requiredFeature:(id)a6;

@end
