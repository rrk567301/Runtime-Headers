@class NSString, CKRecord, NSObject;
@protocol OS_os_log;

@interface DEDCloudKitBaseModel : NSObject <DEDCloudKitModel, NSSecureCoding, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) CKRecord *cloudKitModel;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)recordClasses;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addReferenceForModel:(id)a0 referenceKey:(id)a1;
- (id)initModelWithDictionary:(id)a0;

@end
