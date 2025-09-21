@class AMSFairPlayContext, NSObject;
@protocol OS_dispatch_queue;

@interface AMSKeybag : NSObject

@property (class, readonly) AMSKeybag *sharedInstance;

@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain) AMSFairPlayContext *fairPlayContext;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)fairplayContextWithError:(id *)a0;
- (char)importDiversityBagWithData:(id)a0 error:(id *)a1;
- (char)importKeybagData:(id)a0 outError:(id *)a1;
- (char)importKeybagWithData:(id)a0 error:(id *)a1;
- (id)keybagSyncData:(id)a0 transactionType:(unsigned int)a1 outError:(id *)a2;
- (id)keybagSyncDataWithAccountID:(id)a0 transactionType:(unsigned int)a1 error:(id *)a2;
- (id)kybsyncData:(id)a0 transationType:(unsigned int)a1 error:(id *)a2;
- (void)resetContext;

@end
