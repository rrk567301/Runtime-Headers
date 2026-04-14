@class NSLock;
@protocol ISUIHostProtocol;

@interface CKDialogController : CKServiceInterface {
    NSLock *_lock;
    id<ISUIHostProtocol> _delegate;
}

+ (id)sharedDialogController;

- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithStoreClient:(id)a0;

@end
