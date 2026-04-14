@class NSString, NSMutableArray;

@interface PDSProtoTopic : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *qualifier;
@property (retain, nonatomic) NSMutableArray *appInfos;

+ (Class)appInfoType;

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
- (id)appInfoAtIndex:(unsigned long long)a0;
- (void)addAppInfo:(id)a0;
- (unsigned long long)appInfosCount;
- (void)clearAppInfos;

@end
