@class NSOutputStream, NSString, NSArray, NSData, NSPort, NSInputStream, NSObject;
@protocol OS_os_log;

@interface MCSocket : NSObject <NSStreamDelegate> {
    NSArray *_clientCertificates;
    char _useSSL;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSPort *wakeupPort;
@property (retain) NSInputStream *inputStream;
@property (retain) NSOutputStream *outputStream;
@property (copy) id /* block */ bytesAvailableHandler;
@property char scheduledForBytesToArrive;
@property (readonly) unsigned long long identifier;
@property long long activityType;
@property char isNonAppInitiated;
@property (nonatomic) double connectTimeout;
@property (nonatomic) double readWriteTimeout;
@property (readonly, nonatomic) char isExpensive;
@property (readonly, copy, nonatomic) NSString *securityLevel;
@property (readonly, nonatomic) unsigned int cipherKeyLength;
@property (readonly, nonatomic) char isReadable;
@property (readonly, nonatomic) char isWritable;
@property (readonly, nonatomic) char isValid;
@property (readonly, copy, nonatomic) NSString *remoteHostname;
@property (readonly, nonatomic) long long remotePortNumber;
@property (readonly, copy, nonatomic) NSData *sourceIPAddress;
@property (readonly, copy, nonatomic) NSString *sourceHostname;
@property (copy) NSArray *trustedCertificates;
@property char disableEphemeralDiffieHellmanCiphers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (struct __SecTrust { } *)serverTrust;
- (void)setClientIdentity:(struct __SecIdentity { } *)a0;
- (char)setUsesSSL:(char)a0;
- (void)registerForBytesToArriveWithHandler:(id /* block */)a0;
- (void)unregisterForBytesToArrive;
- (void)_cancelLookupForHost:(struct __CFHost { } *)a0 infoType:(int)a1;
- (char)_handleReadWriteErrorOnStream:(id)a0 timedOut:(char)a1 logDetails:(id)a2 error:(id *)a3;
- (void)_scheduleInputStreamInMainRunLoopIfNecessary;
- (char)_setSSLStreamProperties:(char)a0;
- (char)_setupStreamsWithHostname:(id)a0 port:(long long)a1 needToEstablishInternetConnection:(char *)a2 useSSL:(char *)a3 isBackground:(char)a4 error:(id *)a5;
- (void)_unscheduleInputStreamFromMainRunLoopIfNecessary;
- (id)_waitForSecurityLayerNegotiationStreamsAreScheduled:(char)a0;
- (char)connectToHost:(id)a0 withPort:(long long)a1 isBackground:(char)a2;
- (long long)readBytes:(void *)a0 maxLength:(unsigned long long)a1 error:(id *)a2;
- (long long)writeBytes:(const void *)a0 maxLength:(unsigned long long)a1 error:(id *)a2;

@end
