@interface AWDProactiveModelFittingLabelSupportPair : PBCodable <NSCopying> {
    struct { unsigned char label : 1; unsigned char support : 1; } _has;
}

@property (nonatomic) BOOL hasLabel;
@property (nonatomic) unsigned long long label;
@property (nonatomic) BOOL hasSupport;
@property (nonatomic) float support;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
