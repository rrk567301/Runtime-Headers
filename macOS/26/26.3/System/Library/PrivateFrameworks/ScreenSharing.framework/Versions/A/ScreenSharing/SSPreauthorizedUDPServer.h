@class NSData, NSString;

@interface SSPreauthorizedUDPServer : NSObject {
    void *mIPCRef;
}

@property int connectedUDPSocket;
@property unsigned long long maximumBytesPerSecond;
@property long long encryptionLevel;
@property (copy) NSData *encryptionKey;
@property (copy) NSString *username;
@property (copy) NSString *remoteIPPort;

- (void)start;
- (void)stop;
- (id)init;
- (void)dealloc;

@end
