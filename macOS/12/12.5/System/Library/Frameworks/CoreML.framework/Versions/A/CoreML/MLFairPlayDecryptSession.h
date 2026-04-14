@class NSString, NSObject, NSXPCConnection;
@protocol CoreMLModelSecurityProtocol;

@interface MLFairPlayDecryptSession : NSObject

@property (copy, nonatomic) NSString *modelPath;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSObject<CoreMLModelSecurityProtocol> *xpcProxy;

+ (id)decryptSessionForModelAtPath:(id)a0 keyBlob:(id)a1 error:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;

@end
