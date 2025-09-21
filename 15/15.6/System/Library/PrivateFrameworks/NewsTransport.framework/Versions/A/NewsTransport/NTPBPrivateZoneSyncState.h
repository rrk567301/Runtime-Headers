@class NSString, NSData, NTPBDate;

@interface NTPBPrivateZoneSyncState : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) char hasChangeToken;
@property (retain, nonatomic) NSData *changeToken;
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
