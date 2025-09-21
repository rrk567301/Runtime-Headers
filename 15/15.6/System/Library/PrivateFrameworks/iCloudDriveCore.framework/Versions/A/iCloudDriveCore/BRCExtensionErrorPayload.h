@class NSString, NSMutableArray;

@interface BRCExtensionErrorPayload : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasMinimumOSName;
@property (retain, nonatomic) NSString *minimumOSName;
@property (readonly, nonatomic) char hasRecordId;
@property (retain, nonatomic) NSString *recordId;
@property (readonly, nonatomic) char hasFieldName;
@property (retain, nonatomic) NSString *fieldName;
@property (retain, nonatomic) NSMutableArray *recordIds;

+ (Class)recordIdsType;

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
- (void)addRecordIds:(id)a0;
- (void)clearRecordIds;
- (id)recordIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)recordIdsCount;

@end
