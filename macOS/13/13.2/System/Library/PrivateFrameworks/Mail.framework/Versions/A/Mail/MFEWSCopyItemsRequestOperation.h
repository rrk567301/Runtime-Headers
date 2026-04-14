@class NSArray, NSString, MFEWSCopyItemsResponseOperation;

@interface MFEWSCopyItemsRequestOperation : MFEWSRequestOperation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *offlineCreatedEWSItemIdStrings;
@property (readonly, copy, nonatomic) NSString *sourceEWSFolderIdString;
@property (readonly, copy, nonatomic) NSString *destinationEWSFolderIdString;
@property (readonly, copy, nonatomic) NSArray *EWSItemIds;
@property (retain, nonatomic) MFEWSCopyItemsResponseOperation *responseOperation;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)activityString;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (void)setupOfflineResponse;
- (id)initWithEWSItemIds:(id)a0 sourceIdString:(id)a1 destinationIdString:(id)a2 gateway:(id)a3 errorHandler:(id)a4;
- (void)_ewsCopyItemsRequestOperationCommonInitWithEWSItemIds:(id)a0 sourceIdString:(id)a1 destinationIdString:(id)a2;
- (id)prepareRequest;
- (void)_newEWSItemIdStringsDidChange:(id)a0;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;

@end
