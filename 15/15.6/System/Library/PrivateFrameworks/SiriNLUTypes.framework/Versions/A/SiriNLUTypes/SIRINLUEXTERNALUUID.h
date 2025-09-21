@interface SIRINLUEXTERNALUUID : PBCodable <NSCopying> {
    struct { unsigned char highInt : 1; unsigned char lowInt : 1; unsigned char namespaceA : 1; } _has;
}

@property (nonatomic) char hasHighInt;
@property (nonatomic) unsigned long long highInt;
@property (nonatomic) char hasLowInt;
@property (nonatomic) unsigned long long lowInt;
@property (nonatomic) char hasNamespaceA;
@property (nonatomic) int namespaceA;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsNamespaceA:(id)a0;
- (id)namespaceAAsString:(int)a0;

@end
