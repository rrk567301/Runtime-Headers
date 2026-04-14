@class NSString, CSLRCFedRecordLRCFedClientMetadata, NSData;

@interface CSLRCFedRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) CSLRCFedRecordLRCFedClientMetadata *clientMetadata;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *timestamp;
@property (readonly, nonatomic) BOOL hasLrcFedRecord;
@property (retain, nonatomic) NSData *lrcFedRecord;
@property (readonly, nonatomic) BOOL hasBackupKeybagLRCFedSHA256;
@property (retain, nonatomic) NSData *backupKeybagLRCFedSHA256;
@property (readonly, nonatomic) BOOL hasBackupKeybagLRCSHA256;
@property (retain, nonatomic) NSData *backupKeybagLRCSHA256;

+ (id)parseFromAccountInfoPlist:(id)a0 error:(id *)a1;

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
