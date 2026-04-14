@class AuthCredential, ChannelIdentity, NSData, NSString, ServerRoutablePayloadRequest;

@interface ChannelActivityActivationRequest : PBRequest <NSCopying> {
    struct { unsigned char clientTimestampSeconds : 1; unsigned char payloadExpirationInSeconds : 1; unsigned char deviceConnectivityUpdatePriority : 1; unsigned char pushPriority : 1; unsigned char requestFlag : 1; unsigned char skipAllPayloadsInResponse : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAuthCredential;
@property (retain, nonatomic) AuthCredential *authCredential;
@property (readonly, nonatomic) BOOL hasChannelIdentity;
@property (retain, nonatomic) ChannelIdentity *channelIdentity;
@property (nonatomic) BOOL hasRequestFlag;
@property (nonatomic) int requestFlag;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasClientTimestampSeconds;
@property (nonatomic) unsigned long long clientTimestampSeconds;
@property (readonly, nonatomic) BOOL hasEncryptedParticipantPayload;
@property (retain, nonatomic) NSData *encryptedParticipantPayload;
@property (readonly, nonatomic) BOOL hasAdopter;
@property (retain, nonatomic) NSString *adopter;
@property (nonatomic) BOOL hasPushPriority;
@property (nonatomic) int pushPriority;
@property (nonatomic) BOOL hasPayloadExpirationInSeconds;
@property (nonatomic) unsigned long long payloadExpirationInSeconds;
@property (nonatomic) BOOL hasDeviceConnectivityUpdatePriority;
@property (nonatomic) int deviceConnectivityUpdatePriority;
@property (nonatomic) BOOL hasSkipAllPayloadsInResponse;
@property (nonatomic) BOOL skipAllPayloadsInResponse;
@property (readonly, nonatomic) BOOL hasServerRoutablePayloadRequest;
@property (retain, nonatomic) ServerRoutablePayloadRequest *serverRoutablePayloadRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsDeviceConnectivityUpdatePriority:(id)a0;
- (int)StringAsPushPriority:(id)a0;
- (int)StringAsRequestFlag:(id)a0;
- (id)deviceConnectivityUpdatePriorityAsString:(int)a0;
- (id)pushPriorityAsString:(int)a0;
- (id)requestFlagAsString:(int)a0;

@end
