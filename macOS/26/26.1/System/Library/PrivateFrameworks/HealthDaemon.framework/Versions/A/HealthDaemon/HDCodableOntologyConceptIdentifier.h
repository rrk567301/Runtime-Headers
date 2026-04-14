@class NSString;

@interface HDCodableOntologyConceptIdentifier : PBCodable <NSCopying> {
    struct { unsigned char identifier : 1; } _has;
}

@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) long long identifier;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
