@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;
@property (retain, nonatomic) NSMutableArray *listFields;

+ (Class)fieldsType;
+ (Class)listFieldType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearFields;
- (void)addFields:(id)a0;
- (unsigned long long)fieldsCount;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (void)clearListFields;
- (void)addListField:(id)a0;
- (unsigned long long)listFieldsCount;
- (id)listFieldAtIndex:(unsigned long long)a0;

@end
