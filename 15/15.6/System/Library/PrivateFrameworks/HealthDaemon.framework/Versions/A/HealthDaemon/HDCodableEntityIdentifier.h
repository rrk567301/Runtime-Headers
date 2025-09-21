@class NSString;

@interface HDCodableEntityIdentifier : PBCodable <NSCopying> {
    struct { unsigned char identifier : 1; } _has;
}

@property (readonly, nonatomic) char hasSchema;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) char hasIdentifier;
@property (nonatomic) long long identifier;

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
