@class AuthCredential, ChannelIdentity, NSData, NSString;

@interface ChannelActivityActivationRequest : PBRequest <NSCopying> {
    struct { unsigned char clientTimestampSeconds : 1; unsigned char pushPriority : 1; unsigned char requestFlag : 1; } _has;
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

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsPushPriority:(id)a0;
- (int)StringAsRequestFlag:(id)a0;
- (id)pushPriorityAsString:(int)a0;
- (id)requestFlagAsString:(int)a0;

@end
