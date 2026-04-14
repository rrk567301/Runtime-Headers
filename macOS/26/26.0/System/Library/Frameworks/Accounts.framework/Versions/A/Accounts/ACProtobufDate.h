@class NSDate;

@interface ACProtobufDate : PBCodable <NSCopying>

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double value;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDate:(id)a0;

@end
