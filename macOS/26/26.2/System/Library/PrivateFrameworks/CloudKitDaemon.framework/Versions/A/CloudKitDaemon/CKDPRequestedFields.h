@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;
@property (retain, nonatomic) NSMutableArray *listFields;

+ (Class)fieldsType;
+ (Class)listFieldType;

- (void)addFields:(id)a0;
- (void)clearFields;
- (id)listFieldAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)addListField:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)fieldsCount;
- (void)clearListFields;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (void)mergeFrom:(id)a0;
- (unsigned long long)listFieldsCount;
- (id)dictionaryRepresentation;

@end
