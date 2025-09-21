@class NSString, AuthCredential;

@interface SharedChannelCreateRequest : PBRequest <NSCopying> {
    struct { unsigned char channelOwnershipType : 1; } _has;
}

@property (readonly, nonatomic) char hasChannelTopic;
@property (retain, nonatomic) NSString *channelTopic;
@property (readonly, nonatomic) char hasAuthCredential;
@property (retain, nonatomic) AuthCredential *authCredential;
@property (nonatomic) char hasChannelOwnershipType;
@property (nonatomic) int channelOwnershipType;
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
- (int)StringAsChannelOwnershipType:(id)a0;
- (id)channelOwnershipTypeAsString:(int)a0;

@end
