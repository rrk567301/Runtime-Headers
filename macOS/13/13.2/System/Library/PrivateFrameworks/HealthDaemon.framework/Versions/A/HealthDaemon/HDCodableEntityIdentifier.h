@class NSString;

@interface HDCodableEntityIdentifier : PBCodable <NSCopying> {
    struct { unsigned char identifier : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSchema;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) long long identifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
