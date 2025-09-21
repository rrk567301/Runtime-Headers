@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MLFairPlayDecryptSessionManager : NSObject

@property (readonly, retain) NSMutableDictionary *modelPathToSessionID;
@property (readonly, retain) NSObject<OS_dispatch_queue> *syncQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)startDecryptionOfModelAtPath:(id)a0 usingKeyBlob:(id)a1 teamIdentifier:(id)a2 error:(id *)a3;
- (char)stopDecryptionOfModelAtPath:(id)a0 error:(id *)a1;

@end
