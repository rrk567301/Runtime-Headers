@class NSString, NSMutableArray;

@interface PDSProtoTopic : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *qualifier;
@property (retain, nonatomic) NSMutableArray *appInfos;

+ (Class)appInfoType;

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
- (id)appInfoAtIndex:(unsigned long long)a0;
- (void)addAppInfo:(id)a0;
- (unsigned long long)appInfosCount;
- (void)clearAppInfos;

@end
