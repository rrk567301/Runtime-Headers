@class PHImageRequestOptions;

@interface PHAdjustmentDataRequestContext : PHMediaRequestContext

@property (readonly, nonatomic) PHImageRequestOptions *options;

- (long long)type;
- (id)initialRequests;
- (BOOL)isNetworkAccessAllowed;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (void).cxx_destruct;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 options:(id)a3 resultHandler:(id /* block */)a4;

@end
