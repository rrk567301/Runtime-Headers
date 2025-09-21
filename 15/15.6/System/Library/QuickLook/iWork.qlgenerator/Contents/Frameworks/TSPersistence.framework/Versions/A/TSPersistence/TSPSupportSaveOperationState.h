@class NSUUID, NSURL, TSUSafeSaveAssistant;

@interface TSPSupportSaveOperationState : NSObject

@property (readonly, nonatomic) NSUUID *originalDocumentUUID;
@property (readonly, nonatomic) NSUUID *originalVersionUUID;
@property (copy, nonatomic) NSURL *originalURL;
@property (readonly, nonatomic) char shouldUpdate;
@property (readonly, nonatomic) char isSavingCurrentDocument;
@property (readonly, nonatomic) char isSameDocumentUpdate;
@property (readonly, nonatomic) long long updateType;
@property (retain, nonatomic) TSUSafeSaveAssistant *safeSaveAssistant;
@property (copy, nonatomic) NSUUID *documentUUID;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) char didWriteSupportBundleSuccessfuly;
@property (nonatomic) char shouldLeavePendingEndSave;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOriginalDocumentUUID:(id)a0 originalVersionUUID:(id)a1 originalURL:(id)a2 updateType:(long long)a3;

@end
