@class NSString, NSData, HDCodableSyncIdentity;

@interface HDCodableSource : PBCodable <NSCopying> {
    struct { unsigned char modificationDate : 1; unsigned char options : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) char hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (nonatomic) char hasOptions;
@property (nonatomic) long long options;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) char hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) char hasDeleted;
@property (nonatomic) char deleted;
@property (readonly, nonatomic) char hasOwningAppBundleIdentifier;
@property (retain, nonatomic) NSString *owningAppBundleIdentifier;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

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
- (id)decodedModificationDate;
- (id)decodedUUID;

@end
