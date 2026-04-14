@class NSString;

@interface MFEWSDeleteFolderRequestOperation : MFEWSRequestOperation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *folderIdString;

- (id)activityString;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isFolderRequest;
- (void)_ewsDeleteFolderRequestOperationCommonInitWithEWSFolderIdString:(id)a0;
- (id)initWithEWSFolderIdString:(id)a0 gateway:(id)a1;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;
- (void)setupOfflineResponse;

@end
