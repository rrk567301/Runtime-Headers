@class NSString, NSFileManager;

@interface IMDGroupPhotoDonationManager : NSObject <IMDIndexingIntegration>

@property (retain, nonatomic) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)postProcessIndexingForChatDictionary:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)copyGroupPhotoToExternalPathIfNecessary:(id)a0 chatGUID:(id)a1 attachmentFilepath:(id)a2;

@end
