@class CKDPRecordFieldIdentifier, CKDPRecordFieldValue, NSMutableArray;

@interface CKDPRecordField : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *identifier;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) CKDPRecordFieldValue *value;
@property (retain, nonatomic) NSMutableArray *actions;

+ (Class)actionType;
+ (id)emptyFieldWithKey:(id)a0;

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
- (void)addAction:(id)a0;
- (unsigned long long)actionsCount;
- (void)clearActions;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (id)actionAtIndex:(unsigned long long)a0;

@end
