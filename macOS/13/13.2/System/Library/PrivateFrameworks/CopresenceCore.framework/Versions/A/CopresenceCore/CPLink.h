@class NSString, CryptoHelper, IDSGroupSessionUnicastParameter, NSObject;
@protocol OS_nw_connection, OS_dispatch_queue, CPLinkDelegate;

@interface CPLink : NSObject <CPLinkProtocol, NSSecureCoding, NSCopying> {
    CryptoHelper *_cryptoHelper;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSObject<OS_nw_connection> *connection;
@property int connectionState;
@property (copy, nonatomic) IDSGroupSessionUnicastParameter *unicastParam;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *networkQueue;
@property (nonatomic) unsigned char linkType;
@property (weak, nonatomic) id<CPLinkDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)linkWithGroupSessionID:(id)a0 localParticipantID:(unsigned long long)a1 remoteParticipantID:(unsigned long long)a2 dataMode:(long long)a3 connectionIndex:(unsigned long long)a4;
+ (unsigned int)_trafficClassForLinkPriority:(unsigned int)a0;
+ (long long)_getIDSDataModelForLinkType:(unsigned char)a0;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (BOOL)isReady;
- (void)_enableKeepAlive;
- (void)sendUnicastData:(id)a0 ofType:(unsigned char)a1 completion:(id /* block */)a2;
- (void)sendData:(id)a0 ofType:(unsigned char)a1 completion:(id /* block */)a2;
- (void)resetTrafficPriority:(unsigned int)a0;
- (id)initWithUnicastParameter:(id)a0;
- (void)requestNWConnectionWithReply:(unsigned char)a0 completion:(id /* block */)a1;
- (BOOL)_isUnreliableLink;
- (void)_readData:(id)a0;

@end
