@class NSDate, NSString, NSArray, CESRDictionaryLog, NSURL, CESREuclidProfileInstance, NSMutableArray, NSNumber;

@interface CESRSpeechProfileSite : NSObject <NSCopying> {
    CESRDictionaryLog *_log;
    NSString *_description;
    NSMutableArray *_speechProfileInstances;
    CESREuclidProfileInstance *_euclidProfileInstance;
}

@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) BOOL isInUserVault;
@property (readonly, nonatomic) NSURL *speechProfileSiteURL;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) NSArray *speechProfileInstances;
@property (readonly, nonatomic) CESREuclidProfileInstance *euclidProfileInstance;
@property (readonly, nonatomic) NSDate *lastRebuild;
@property (readonly, nonatomic) NSDate *lastMaintenance;
@property (readonly, nonatomic) NSDate *lastReset;
@property (readonly, nonatomic) NSNumber *schemaVersion;

+ (id)speechProfileSiteAtURL:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)remove:(id *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithSpeechProfileSiteURL:(id)a0 readOnly:(BOOL)a1 create:(BOOL)a2 error:(id *)a3;
- (id)instanceWithLocale:(id)a0 options:(unsigned char)a1 error:(id *)a2;
- (BOOL)isEqualToSpeechProfileSite:(id)a0;
- (BOOL)isEquivalentSpeechProfileSiteURL:(id)a0;
- (BOOL)recordMaintenance:(id *)a0;
- (BOOL)recordRebuild:(id *)a0;
- (BOOL)recordReset:(id *)a0;
- (BOOL)recordSchemaVersion:(id *)a0;
- (BOOL)removeInstance:(id)a0 error:(id *)a1;

@end
