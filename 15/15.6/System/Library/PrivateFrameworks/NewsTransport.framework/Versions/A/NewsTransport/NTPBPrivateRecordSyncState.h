@class NSString, NTPBDate;

@interface NTPBPrivateRecordSyncState : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasRecordName;
@property (retain, nonatomic) NSString *recordName;
@property (readonly, nonatomic) char hasRecordZoneName;
@property (retain, nonatomic) NSString *recordZoneName;
@property (readonly, nonatomic) char hasLastCleanDate;
@property (retain, nonatomic) NTPBDate *lastCleanDate;
@property (readonly, nonatomic) char hasLastDirtyDate;
@property (retain, nonatomic) NTPBDate *lastDirtyDate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
