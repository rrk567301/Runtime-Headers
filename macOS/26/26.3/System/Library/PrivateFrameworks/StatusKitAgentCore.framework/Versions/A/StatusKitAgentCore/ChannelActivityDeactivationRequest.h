@class AuthCredential, ChannelIdentity, NSData, NSString;

@interface ChannelActivityDeactivationRequest : PBRequest <NSCopying> {
    struct { unsigned char clientTimestampSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAuthCredential;
@property (retain, nonatomic) AuthCredential *authCredential;
@property (readonly, nonatomic) BOOL hasChannelIdentity;
@property (retain, nonatomic) ChannelIdentity *channelIdentity;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasClientTimestampSeconds;
@property (nonatomic) unsigned long long clientTimestampSeconds;
@property (readonly, nonatomic) BOOL hasAdopter;
@property (retain, nonatomic) NSString *adopter;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
