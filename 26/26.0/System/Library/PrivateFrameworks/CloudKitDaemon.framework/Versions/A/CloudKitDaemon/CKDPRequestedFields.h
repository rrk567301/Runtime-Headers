@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;
@property (retain, nonatomic) NSMutableArray *listFields;

+ (Class)fieldsType;
+ (Class)listFieldType;

- (void)clearFields;
- (void)addFields:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (void)addListField:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)listFieldAtIndex:(unsigned long long)a0;
- (void)clearListFields;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)listFieldsCount;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)fieldsCount;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
