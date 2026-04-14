@class NSData, NSObject;
@protocol OS_dispatch_queue;

@interface AutomationEncryptionProvider : NSObject <WBSEncryptionProvider> {
    NSData *_encryptionKey;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (id)encryptData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)decryptData:(id)a0;
- (id)ensureEncryptionKey;

@end
