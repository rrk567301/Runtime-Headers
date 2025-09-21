@class NSString, NSData;

@interface BRServerInfoRecordInfo : PBCodable <NSCopying> {
    struct { unsigned char bounceNo : 1; } _has;
}

@property (readonly, nonatomic) char hasRecordID;
@property (retain, nonatomic) NSString *recordID;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) char hasEncryptedBasename;
@property (retain, nonatomic) NSData *encryptedBasename;
@property (nonatomic) char hasBounceNo;
@property (nonatomic) unsigned long long bounceNo;
@property (readonly, nonatomic) char hasExtension;
@property (retain, nonatomic) NSString *extension;
@property (readonly, nonatomic) char hasRecordProtectionInfo;
@property (retain, nonatomic) NSData *recordProtectionInfo;
@property (readonly, nonatomic) char hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) char hasZoneProtectionInfo;
@property (retain, nonatomic) NSData *zoneProtectionInfo;

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
