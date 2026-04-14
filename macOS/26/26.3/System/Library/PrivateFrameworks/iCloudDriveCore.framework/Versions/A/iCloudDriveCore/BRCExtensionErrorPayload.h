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

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addRecordIds:(id)a0;
- (void)clearRecordIds;
- (id)recordIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)recordIdsCount;

@end
