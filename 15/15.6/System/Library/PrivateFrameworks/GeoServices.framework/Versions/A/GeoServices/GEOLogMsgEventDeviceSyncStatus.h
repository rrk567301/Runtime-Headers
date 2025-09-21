@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventDeviceSyncStatus : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_syncDatas;
}

@property (retain, nonatomic) NSMutableArray *syncDatas;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)syncDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSyncData:(id)a0;
- (void)clearSyncDatas;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)syncDataAtIndex:(unsigned long long)a0;
- (unsigned long long)syncDatasCount;

@end
