@class NSString;

@interface AWDIDSQuickRelay : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; unsigned char eventSubType : 1; unsigned char eventType : 1; unsigned char interfaceType : 1; unsigned char isInitiator : 1; unsigned char protocolVersion : 1; unsigned char providerType : 1; unsigned char resultCode : 1; unsigned char retryCount : 1; unsigned char skeEnabled : 1; unsigned char transportType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasEventType;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) char hasEventSubType;
@property (nonatomic) unsigned int eventSubType;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) char hasResultCode;
@property (nonatomic) unsigned int resultCode;
@property (nonatomic) char hasTransportType;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) char hasInterfaceType;
@property (nonatomic) unsigned int interfaceType;
@property (nonatomic) char hasSkeEnabled;
@property (nonatomic) unsigned int skeEnabled;
@property (nonatomic) char hasIsInitiator;
@property (nonatomic) unsigned int isInitiator;
@property (nonatomic) char hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) char hasRetryCount;
@property (nonatomic) unsigned int retryCount;
@property (readonly, nonatomic) char hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) char hasSubServiceName;
@property (retain, nonatomic) NSString *subServiceName;
@property (nonatomic) char hasProviderType;
@property (nonatomic) unsigned int providerType;

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
