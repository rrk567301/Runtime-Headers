@class NSData, NSString;

@interface _MRGroupSessionTokenProtobuf : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) NSData *invitationData;
@property (nonatomic) int routeType;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) BOOL hasSharedSecret;
@property (retain, nonatomic) NSString *sharedSecret;
@property (readonly, nonatomic) BOOL hasEquivalentMediaIdentifier;
@property (retain, nonatomic) NSString *equivalentMediaIdentifier;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;

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
- (int)StringAsRouteType:(id)a0;
- (id)routeTypeAsString:(int)a0;

@end
