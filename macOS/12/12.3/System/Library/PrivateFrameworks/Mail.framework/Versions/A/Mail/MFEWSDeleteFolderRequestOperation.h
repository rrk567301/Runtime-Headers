@class NSString;

@interface MFEWSDeleteFolderRequestOperation : MFEWSRequestOperation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *folderIdString;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)activityString;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (void)setupOfflineResponse;
- (id)prepareRequest;
- (BOOL)isFolderRequest;
- (void)_ewsDeleteFolderRequestOperationCommonInitWithEWSFolderIdString:(id)a0;
- (id)initWithEWSFolderIdString:(id)a0 gateway:(id)a1;

@end
