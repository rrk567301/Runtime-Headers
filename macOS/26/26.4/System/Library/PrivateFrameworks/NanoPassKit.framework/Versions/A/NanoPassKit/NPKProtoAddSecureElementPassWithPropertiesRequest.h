@class NSString, NSMutableArray;

@interface NPKProtoAddSecureElementPassWithPropertiesRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPassUniqueID;
@property (retain, nonatomic) NSString *passUniqueID;
@property (retain, nonatomic) NSMutableArray *payloadDatas;

+ (Class)payloadDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addPayloadData:(id)a0;
- (void)clearPayloadDatas;
- (id)payloadDataAtIndex:(unsigned long long)a0;
- (unsigned long long)payloadDatasCount;

@end
