@class AuthCredential, ChannelIdentity, NSData, NSString;

@interface ChannelActivityDeactivationRequest : PBRequest <NSCopying> {
    struct { unsigned char clientTimestampSeconds : 1; } _has;
}

@property (readonly, nonatomic) char hasAuthCredential;
@property (retain, nonatomic) AuthCredential *authCredential;
@property (readonly, nonatomic) char hasChannelIdentity;
@property (retain, nonatomic) ChannelIdentity *channelIdentity;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) char hasClientTimestampSeconds;
@property (nonatomic) unsigned long long clientTimestampSeconds;
@property (readonly, nonatomic) char hasAdopter;
@property (retain, nonatomic) NSString *adopter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
