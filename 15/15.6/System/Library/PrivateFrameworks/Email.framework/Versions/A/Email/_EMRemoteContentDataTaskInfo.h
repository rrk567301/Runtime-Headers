@class NSString, NSData, NSURLSessionDataTask, NSObject;
@protocol OS_dispatch_data;

@interface _EMRemoteContentDataTaskInfo : NSObject <EFCancelable> {
    NSObject<OS_dispatch_data> *_data;
}

@property (readonly, nonatomic) NSURLSessionDataTask *dataTask;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) char isSynthetic;
@property (readonly, nonatomic) char failOpen;
@property (readonly, copy, nonatomic) NSData *data;
@property (nonatomic) char didComplete;
@property (nonatomic) char didCollectMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)finishWithError:(id)a0;
- (id)initWithDataTask:(id)a0 isSynthetic:(char)a1 failOpen:(char)a2 completion:(id /* block */)a3;
- (void)receiveData:(id)a0;

@end
