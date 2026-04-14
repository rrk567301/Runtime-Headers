@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;
@property (retain, nonatomic) NSMutableArray *listFields;

+ (Class)fieldsType;
+ (Class)listFieldType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)addListField:(id)a0;
- (void)clearListFields;
- (unsigned long long)listFieldsCount;
- (id)description;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addFields:(id)a0;
- (id)listFieldAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearFields;
- (unsigned long long)fieldsCount;
- (void)writeTo:(id)a0;

@end
