@class NSData, NSString;

@interface _MRGroupSessionJoinResponseProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPublicSigningKeyData;
@property (retain, nonatomic) NSData *publicSigningKeyData;
@property (readonly, nonatomic) BOOL hasJoinURL;
@property (retain, nonatomic) NSString *joinURL;

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
