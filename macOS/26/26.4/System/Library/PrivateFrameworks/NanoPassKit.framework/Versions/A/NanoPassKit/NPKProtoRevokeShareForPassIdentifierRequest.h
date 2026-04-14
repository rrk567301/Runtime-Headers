@class NSString, NSData;

@interface NPKProtoRevokeShareForPassIdentifierRequest : PBRequest <NSCopying> {
    struct { unsigned char shouldCascade : 1; } _has;
}

@property (retain, nonatomic) NSString *passIdentifier;
@property (retain, nonatomic) NSData *shareData;
@property (nonatomic) BOOL hasShouldCascade;
@property (nonatomic) BOOL shouldCascade;

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

@end
