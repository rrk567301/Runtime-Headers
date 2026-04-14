@class NSString, NSData, CSFDERecordFDEClientMetadata;

@interface CSFDERecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) CSFDERecordFDEClientMetadata *clientMetadata;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *timestamp;
@property (readonly, nonatomic) BOOL hasBackupKeybagSHA256;
@property (retain, nonatomic) NSData *backupKeybagSHA256;

+ (id)parseFromAccountInfoPlist:(id)a0 error:(id *)a1;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
