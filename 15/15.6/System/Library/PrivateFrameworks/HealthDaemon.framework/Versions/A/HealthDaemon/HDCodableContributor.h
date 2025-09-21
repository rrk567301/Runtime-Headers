@class NSData, HDCodableSyncIdentity, NSString;

@interface HDCodableContributor : PBCodable <NSCopying> {
    struct { unsigned char modificationDate : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) char hasDeleted;
@property (nonatomic) char deleted;
@property (nonatomic) char hasModificationDate;
@property (nonatomic) double modificationDate;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;
@property (readonly, nonatomic) char hasAppleID;
@property (retain, nonatomic) NSString *appleID;
@property (readonly, nonatomic) char hasCallerID;
@property (retain, nonatomic) NSString *callerID;

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
