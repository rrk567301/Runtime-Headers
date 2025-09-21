@class NSMutableArray, NSString, NSArray, NSURL, NSDate, NSNumber, CESRDictionaryLog;

@interface CESRSpeechProfileSite : NSObject <NSCopying> {
    CESRDictionaryLog *_log;
    NSString *_description;
    NSMutableArray *_instances;
}

@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) char isInUserVault;
@property (readonly, nonatomic) NSURL *speechProfileSiteURL;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) NSArray *instances;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) NSNumber *userIdHash;
@property (readonly, nonatomic) NSDate *lastRebuild;
@property (readonly, nonatomic) NSDate *lastMaintenance;
@property (readonly, nonatomic) NSDate *lastReset;
@property (readonly, nonatomic) NSNumber *schemaVersion;

+ (id)_existingSpeechProfileSiteAtURL:(id)a0 readOnly:(char)a1 error:(id *)a2;
+ (id)_speechProfileSiteAtRootDirectoryURL:(id)a0 userId:(id)a1 readOnly:(char)a2 error:(id *)a3;
+ (id)_speechProfileSiteAtURL:(id)a0 userId:(id)a1 userIdHash:(id)a2 readOnly:(char)a3 error:(id *)a4;
+ (id)speechProfileSiteAtURL:(id)a0 readOnly:(char)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)remove:(id *)a0;
- (id)initWithSpeechProfileSiteURL:(id)a0 readOnly:(char)a1 create:(char)a2 userId:(id)a3 userIdHash:(id)a4 error:(id *)a5;
- (id)instanceWithLocale:(id)a0 options:(unsigned char)a1 error:(id *)a2;
- (char)isEqualToSpeechProfileSite:(id)a0;
- (char)isEquivalentSpeechProfileSiteURL:(id)a0;
- (char)recordMaintenance:(id *)a0;
- (char)recordRebuild:(id *)a0;
- (char)recordReset:(id *)a0;
- (char)recordSchemaVersion:(id *)a0;
- (char)removeInstance:(id)a0 error:(id *)a1;

@end
