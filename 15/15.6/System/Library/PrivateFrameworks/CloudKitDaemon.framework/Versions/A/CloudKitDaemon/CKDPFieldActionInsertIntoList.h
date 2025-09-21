@class CKDPListPosition, NSMutableArray;

@interface CKDPFieldActionInsertIntoList : PBCodable <NSCopying> {
    struct { unsigned char insertAfter : 1; } _has;
}

@property (readonly, nonatomic) char hasPosition;
@property (retain, nonatomic) CKDPListPosition *position;
@property (nonatomic) char hasInsertAfter;
@property (nonatomic) char insertAfter;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

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
- (void)addValue:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)clearValues;
- (unsigned long long)valuesCount;

@end
