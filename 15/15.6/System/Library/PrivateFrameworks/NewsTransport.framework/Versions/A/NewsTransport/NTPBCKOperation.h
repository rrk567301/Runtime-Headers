@class NSString;

@interface NTPBCKOperation : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char last : 1; unsigned char synchronousMode : 1; } _has;
}

@property (readonly, nonatomic) char hasOperationUUID;
@property (retain, nonatomic) NSString *operationUUID;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasSynchronousMode;
@property (nonatomic) char synchronousMode;
@property (nonatomic) char hasLast;
@property (nonatomic) char last;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
