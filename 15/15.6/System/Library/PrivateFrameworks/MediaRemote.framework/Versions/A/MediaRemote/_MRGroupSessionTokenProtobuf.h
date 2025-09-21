@class NSData, NSString;

@interface _MRGroupSessionTokenProtobuf : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) NSData *invitationData;
@property (nonatomic) int routeType;
@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) char hasSessionIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) char hasSharedSecret;
@property (retain, nonatomic) NSString *sharedSecret;
@property (readonly, nonatomic) char hasEquivalentMediaIdentifier;
@property (retain, nonatomic) NSString *equivalentMediaIdentifier;
@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;

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
- (int)StringAsRouteType:(id)a0;
- (id)routeTypeAsString:(int)a0;

@end
