@class NSString;

@interface HDCodableUserDomainConceptTypeIdentifier : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSchema;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasCode;
@property (nonatomic) long long code;

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
