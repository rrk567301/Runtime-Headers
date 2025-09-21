@class NSString, NSMutableArray;

@interface BRCExtensionErrorPayload : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMinimumOSName;
@property (retain, nonatomic) NSString *minimumOSName;
@property (readonly, nonatomic) BOOL hasRecordId;
@property (retain, nonatomic) NSString *recordId;
@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) NSString *fieldName;
@property (retain, nonatomic) NSMutableArray *recordIds;

+ (Class)recordIdsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addRecordIds:(id)a0;
- (void)clearRecordIds;
- (id)recordIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)recordIdsCount;

@end
