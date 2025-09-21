@class NSString, LAAccessKey, LARightContextHandler, NSObject;
@protocol OS_dispatch_queue;

@interface LARight : NSObject <LARightContextHandlerDelegate> {
    NSString *_identifier;
    LAAccessKey *_accessKey;
    LARightContextHandler *_contextHandler;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _instanceID;
}

@property (nonatomic) long long state;
@property (nonatomic) long long tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (void)dealloc;
- (id)init;
- (char)isEqual:(id)a0;
- (id)context;
- (void).cxx_destruct;
- (id)identifier;
- (void)setContext:(id)a0;
- (id)accessKey;
- (void)authorizeWithLocalizedReason:(id)a0 completion:(id /* block */)a1;
- (void)authorizeWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)checkCanAuthorizeWithCompletion:(id /* block */)a0;
- (void)deauthorizeWithCompletion:(id /* block */)a0;
- (id)initWithAccessKey:(id)a0;
- (id)initWithIdentifier:(id)a0 accessKey:(id)a1;
- (id)initWithRequirement:(id)a0;
- (void)rightContextDidBecomeInvalid;

@end
