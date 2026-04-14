@class FTStartBatchRecoverRequest;

@interface FTMutableBatchRecoverStreamingRequest : FTBatchRecoverStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTStartBatchRecoverRequest *contentAsFTStartBatchRecoverRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
