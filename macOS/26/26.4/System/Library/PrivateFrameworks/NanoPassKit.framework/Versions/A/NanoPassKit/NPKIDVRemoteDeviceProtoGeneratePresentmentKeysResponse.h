@class NSData, NSMutableArray;

@interface NPKIDVRemoteDeviceProtoGeneratePresentmentKeysResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *presentmentKeysDatas;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

+ (Class)presentmentKeysDataType;

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
- (void)addPresentmentKeysData:(id)a0;
- (void)clearPresentmentKeysDatas;
- (id)presentmentKeysDataAtIndex:(unsigned long long)a0;
- (unsigned long long)presentmentKeysDatasCount;

@end
