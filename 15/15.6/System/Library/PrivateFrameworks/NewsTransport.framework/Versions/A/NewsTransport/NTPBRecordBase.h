@class NSString, NTPBDate;

@interface NTPBRecordBase : PBCodable <NSCopying> {
    struct { unsigned char cacheLifetimeHint : 1; unsigned char recordType : 1; unsigned char deletedFromCloud : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasChangeTag;
@property (retain, nonatomic) NSString *changeTag;
@property (readonly, nonatomic) char hasModificationDate;
@property (retain, nonatomic) NTPBDate *modificationDate;
@property (readonly, nonatomic) char hasFetchDate;
@property (retain, nonatomic) NTPBDate *fetchDate;
@property (nonatomic) char hasDeletedFromCloud;
@property (nonatomic) char deletedFromCloud;
@property (nonatomic) char hasCacheLifetimeHint;
@property (nonatomic) int cacheLifetimeHint;
@property (nonatomic) char hasRecordType;
@property (nonatomic) int recordType;
@property (readonly, nonatomic) char hasAssetURLsDate;
@property (retain, nonatomic) NTPBDate *assetURLsDate;

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
