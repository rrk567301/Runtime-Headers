@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;
@property (retain, nonatomic) NSMutableArray *listFields;

+ (Class)fieldsType;
+ (Class)listFieldType;

- (id)fieldsAtIndex:(unsigned long long)a0;
- (void)addFields:(id)a0;
- (void)clearFields;
- (void)clearListFields;
- (unsigned long long)fieldsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)listFieldsCount;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addListField:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)listFieldAtIndex:(unsigned long long)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
