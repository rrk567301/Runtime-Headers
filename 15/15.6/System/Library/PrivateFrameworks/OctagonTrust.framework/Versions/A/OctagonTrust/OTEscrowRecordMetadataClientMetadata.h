@class NSString;

@interface OTEscrowRecordMetadataClientMetadata : PBCodable <NSCopying> {
    struct { unsigned char devicePlatform : 1; unsigned char secureBackupMetadataTimestamp : 1; unsigned char secureBackupNumericPassphraseLength : 1; unsigned char secureBackupUsesComplexPassphrase : 1; unsigned char secureBackupUsesNumericPassphrase : 1; } _has;
}

@property (nonatomic) char hasSecureBackupMetadataTimestamp;
@property (nonatomic) unsigned long long secureBackupMetadataTimestamp;
@property (nonatomic) char hasSecureBackupNumericPassphraseLength;
@property (nonatomic) unsigned long long secureBackupNumericPassphraseLength;
@property (nonatomic) char hasSecureBackupUsesComplexPassphrase;
@property (nonatomic) unsigned long long secureBackupUsesComplexPassphrase;
@property (nonatomic) char hasSecureBackupUsesNumericPassphrase;
@property (nonatomic) unsigned long long secureBackupUsesNumericPassphrase;
@property (readonly, nonatomic) char hasDeviceColor;
@property (retain, nonatomic) NSString *deviceColor;
@property (readonly, nonatomic) char hasDeviceEnclosureColor;
@property (retain, nonatomic) NSString *deviceEnclosureColor;
@property (readonly, nonatomic) char hasDeviceMid;
@property (retain, nonatomic) NSString *deviceMid;
@property (readonly, nonatomic) char hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) char hasDeviceModelClass;
@property (retain, nonatomic) NSString *deviceModelClass;
@property (readonly, nonatomic) char hasDeviceModelVersion;
@property (retain, nonatomic) NSString *deviceModelVersion;
@property (readonly, nonatomic) char hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) char hasDevicePlatform;
@property (nonatomic) unsigned long long devicePlatform;

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
