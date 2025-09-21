@class NSString, NSData;

@interface HDCloudSyncCodableAttachmentReference : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; unsigned char options : 1; unsigned char schemaVersion : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) char hasObjectIdentifier;
@property (retain, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) char hasSchemaIdentifier;
@property (retain, nonatomic) NSString *schemaIdentifier;
@property (readonly, nonatomic) char hasAttachmentIdentifier;
@property (retain, nonatomic) NSString *attachmentIdentifier;
@property (nonatomic) char hasType;
@property (nonatomic) long long type;
@property (nonatomic) char hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) char hasOptions;
@property (nonatomic) long long options;
@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) NSData *metadata;
@property (nonatomic) char hasSchemaVersion;
@property (nonatomic) long long schemaVersion;
@property (readonly, nonatomic) char hasSystemBuildVersion;
@property (retain, nonatomic) NSString *systemBuildVersion;
@property (readonly, nonatomic) char hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (readonly, nonatomic) char hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;

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
