@class SecureBackupTermsInfo;

@interface StoredTermsInfo : PBCodable <NSCopying> {
    struct { unsigned char storageVersion : 1; } _has;
}

@property (nonatomic) BOOL hasStorageVersion;
@property (nonatomic) unsigned long long storageVersion;
@property (readonly, nonatomic) BOOL hasTermsInfo;
@property (retain, nonatomic) SecureBackupTermsInfo *termsInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
