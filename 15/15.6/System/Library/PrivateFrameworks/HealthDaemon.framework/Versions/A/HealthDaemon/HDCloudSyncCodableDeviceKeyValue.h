@class NSString, HDCodableSyncIdentity, NSData;

@interface HDCloudSyncCodableDeviceKeyValue : PBCodable <NSCopying> {
    struct { unsigned char modificationDate : 1; unsigned char protectionCategory : 1; } _has;
}

@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;
@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) NSData *value;
@property (nonatomic) char hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) char hasProtectionCategory;
@property (nonatomic) long long protectionCategory;

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

@end
