@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SMNSSLSecurityProvider : NSObject <SMNNetworkSecurityProvider> {
    id _delegate;
    void *_sslContext;
    NSObject<OS_dispatch_queue> *_sslContextQueue;
}

@property char secureTransport106Compatibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (long long)readData:(void *)a0 length:(unsigned long long)a1;
- (long long)writeData:(void *)a0 length:(unsigned long long)a1;
- (id)initWithQueueName:(id)a0;
- (char)_receiveAcknowledgement;
- (char)_sendAcknowledgement;
- (int)_setProtocolVersionsOnContext:(struct SSLContext { } *)a0 client:(char)a1;
- (char)initializeSecurityOnFileDescriptor:(int)a0 withRole:(unsigned long long)a1;
- (int)performPermissiveHandshakeForContext:(struct SSLContext { } *)a0;
- (char)setupClientSSLOnSocket:(int)a0;
- (char)setupServerSSLOnSocket:(int)a0;

@end
