@class NSString, CSStingrayRecordClientMetadataICloudDataProtection, NSData, CSStingrayRecordClientMetadataStableMetadata, CSStingrayRecordClientMetadataKeyRegistry;

@interface CSStingrayRecordClientMetadata : PBCodable <NSCopying> {
    struct { unsigned char passwordGeneration : 1; unsigned char passwordIterations : 1; } _has;
}

@property (readonly, nonatomic) char hasIcdp;
@property (retain, nonatomic) CSStingrayRecordClientMetadataICloudDataProtection *icdp;
@property (readonly, nonatomic) char hasKeyRegistry;
@property (retain, nonatomic) CSStingrayRecordClientMetadataKeyRegistry *keyRegistry;
@property (readonly, nonatomic) char hasStableMetadata;
@property (retain, nonatomic) CSStingrayRecordClientMetadataStableMetadata *stableMetadata;
@property (readonly, nonatomic) char hasIcloudIdentityPublicData;
@property (retain, nonatomic) NSData *icloudIdentityPublicData;
@property (nonatomic) char hasPasswordGeneration;
@property (nonatomic) long long passwordGeneration;
@property (nonatomic) char hasPasswordIterations;
@property (nonatomic) long long passwordIterations;
@property (readonly, nonatomic) char hasPasswordProtocol;
@property (retain, nonatomic) NSString *passwordProtocol;

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
