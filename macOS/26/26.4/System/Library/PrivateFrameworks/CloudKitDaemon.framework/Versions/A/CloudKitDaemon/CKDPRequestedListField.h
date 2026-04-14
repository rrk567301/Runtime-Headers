@class CKDPRecordFieldIdentifier, NSMutableArray;

@interface CKDPRequestedListField : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFieldId;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldId;
@property (retain, nonatomic) NSMutableArray *ranges;

+ (Class)rangeType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)rangeAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addRange:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)clearRanges;
- (unsigned long long)rangesCount;

@end
