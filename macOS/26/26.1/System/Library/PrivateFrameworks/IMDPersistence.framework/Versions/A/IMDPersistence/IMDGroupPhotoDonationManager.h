@class NSFileManager;

@interface IMDGroupPhotoDonationManager : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)copyGroupPhotoToExternalPathIfNecessary:(id)a0 chatGUID:(id)a1 attachmentFilepath:(id)a2;

@end
