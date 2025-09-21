@class NSDate, NSString, NSArray, WFWorkflowIcon, NSMutableDictionary, WFFileRepresentation, NSDictionary, WFWorkflowQuarantine;

@interface WFWorkflowFile : NSObject <WFRecordStorage, NSItemProviderWriting>

@property (class, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

@property (readonly, nonatomic) WFFileRepresentation *file;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSMutableDictionary *rootObject;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) WFWorkflowQuarantine *quarantine;
@property (copy, nonatomic) NSArray *workflowTypes;
@property (copy, nonatomic) NSArray *quickActionSurfacesForSharing;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *importQuestions;
@property (copy, nonatomic) NSArray *inputClasses;
@property (copy, nonatomic) NSDictionary *noInputBehavior;
@property (copy, nonatomic) NSArray *outputClasses;
@property (nonatomic) char hasShortcutInputVariables;
@property (nonatomic) char hasOutputFallback;
@property (nonatomic) char disabledOnLockScreen;
@property (copy, nonatomic) NSString *lastMigratedClientVersion;
@property (copy, nonatomic) NSString *minimumClientVersion;
@property (readonly, nonatomic) unsigned long long estimatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)descriptor;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)writeToDiskWithError:(id *)a0;
- (id)fileDataWithError:(id *)a0;
- (id)initWithDescriptor:(id)a0 error:(id *)a1;
- (id)initWithFileData:(id)a0 name:(id)a1 error:(id *)a2;
- (id)recordRepresentationWithError:(id *)a0;
- (id)fileDataWithFormat:(unsigned long long)a0 error:(id *)a1;
- (id)initWithDescriptor:(id)a0 performMigration:(char)a1 error:(id *)a2;
- (id)initWithDictionary:(id)a0 name:(id)a1;
- (id)initWithDictionary:(id)a0 name:(id)a1 performMigration:(char)a2;
- (char)migrateRootObject;
- (id)writeToDiskWithFormat:(unsigned long long)a0 error:(id *)a1;
- (char)writeToFileURL:(id)a0 format:(unsigned long long)a1 error:(id *)a2;
- (char)writeToOutputStream:(id)a0 format:(unsigned long long)a1 error:(id *)a2;

@end
