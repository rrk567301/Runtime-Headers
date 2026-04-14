@class NSString;

@interface HDCodableOntologyConceptIdentifier : PBCodable <NSCopying> {
    struct { unsigned char identifier : 1; } _has;
}

@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) long long identifier;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
