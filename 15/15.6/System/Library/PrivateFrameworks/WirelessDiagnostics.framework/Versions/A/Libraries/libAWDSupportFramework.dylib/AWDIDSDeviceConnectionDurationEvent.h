@class NSString;

@interface AWDIDSDeviceConnectionDurationEvent : PBCodable <NSCopying> {
    struct { unsigned char clientInitToClientOpenSocketHandler : 1; unsigned char clientInitToDaemonOpenSocket : 1; unsigned char clientOpenSocketHandlerToIncomingFirstPacket : 1; unsigned char connectionInitToIncomingFirstPacket : 1; unsigned char daemonCompletionHandlerToClientOpenSocketCompletion : 1; unsigned char daemonCompletionHandlerToIncomingFirstPacket : 1; unsigned char daemonOpenSocketToDaemonCompletionHandler : 1; unsigned char timestamp : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) char hasSuccess;
@property (nonatomic) char success;
@property (nonatomic) char hasClientInitToDaemonOpenSocket;
@property (nonatomic) unsigned long long clientInitToDaemonOpenSocket;
@property (nonatomic) char hasClientInitToClientOpenSocketHandler;
@property (nonatomic) unsigned long long clientInitToClientOpenSocketHandler;
@property (nonatomic) char hasClientOpenSocketHandlerToIncomingFirstPacket;
@property (nonatomic) unsigned long long clientOpenSocketHandlerToIncomingFirstPacket;
@property (nonatomic) char hasDaemonOpenSocketToDaemonCompletionHandler;
@property (nonatomic) unsigned long long daemonOpenSocketToDaemonCompletionHandler;
@property (nonatomic) char hasDaemonCompletionHandlerToClientOpenSocketCompletion;
@property (nonatomic) unsigned long long daemonCompletionHandlerToClientOpenSocketCompletion;
@property (nonatomic) char hasDaemonCompletionHandlerToIncomingFirstPacket;
@property (nonatomic) unsigned long long daemonCompletionHandlerToIncomingFirstPacket;
@property (nonatomic) char hasConnectionInitToIncomingFirstPacket;
@property (nonatomic) unsigned long long connectionInitToIncomingFirstPacket;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
