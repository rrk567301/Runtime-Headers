@class NSOperationQueue, NSString, NSMutableDictionary;

@interface MFGlobalBodyFetchContext : NSObject <MCBodyFetchContext> {
    NSMutableDictionary *_fetchContextsByAccountIdentifier;
}

@property (readonly, nonatomic) NSOperationQueue *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)cacheBodiesForMessages:(id)a0;

@end
