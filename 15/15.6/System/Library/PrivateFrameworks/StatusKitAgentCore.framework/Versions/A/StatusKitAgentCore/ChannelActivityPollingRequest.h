@class AuthCredential, ChannelIdentity, NSData, NSString;

@interface ChannelActivityPollingRequest : PBRequest <NSCopying> {
    struct { unsigned char requestFlag : 1; } _has;
}

@property (readonly, nonatomic) char hasAuthCredential;
@property (retain, nonatomic) AuthCredential *authCredential;
@property (readonly, nonatomic) char hasChannelIdentity;
@property (retain, nonatomic) ChannelIdentity *channelIdentity;
@property (nonatomic) char hasRequestFlag;
@property (nonatomic) int requestFlag;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSData *uuid;
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
- (int)StringAsRequestFlag:(id)a0;
- (id)requestFlagAsString:(int)a0;

@end
