@class PHImageRequestOptions;

@interface PHAdjustmentDataRequestContext : PHMediaRequestContext

@property (readonly, nonatomic) PHImageRequestOptions *options;

- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (BOOL)isNetworkAccessAllowed;
- (void).cxx_destruct;
- (long long)type;
- (id)initialRequests;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 options:(id)a3 resultHandler:(id /* block */)a4;

@end
