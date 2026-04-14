@class NSString, NSMutableArray, NSObject;
@protocol OS_os_transaction;

@interface EXSEWSGetAttachmentRequest : NSObject {
    id /* block */ _completion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_callbackInfo;
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *attachmentUUID;

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)addRequestID:(id)a0 connection:(id)a1;
- (void)downloadProgressedTo:(unsigned long long)a0 of:(unsigned long long)a1;
- (id)initWithAccountID:(id)a0 attachmentUUID:(id)a1 completion:(id /* block */)a2;
- (void)sendResponseMessageWithBlock:(id /* block */)a0;

@end
