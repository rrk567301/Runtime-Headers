@class NSString, NSMutableArray;

@interface BMPBUserStatusChangeEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasIdsHandle;
@property (retain, nonatomic) NSString *idsHandle;
@property (readonly, nonatomic) char hasStatusChangeType;
@property (retain, nonatomic) NSString *statusChangeType;
@property (retain, nonatomic) NSMutableArray *idsHandles;

+ (Class)idsHandlesType;

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
- (unsigned long long)idsHandlesCount;
- (void)clearIdsHandles;
- (void)addIdsHandles:(id)a0;
- (id)idsHandlesAtIndex:(unsigned long long)a0;

@end
