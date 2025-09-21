@class NSArray, NSString;

@interface MFEWSDeleteItemsRequestOperation : MFEWSRequestOperation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *EWSItemIds;
@property (readonly, copy, nonatomic) NSString *folderIdString;

- (void)encodeWithCoder:(id)a0;
- (id)activityString;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_ewsDeleteItemsRequestOperationCommonInitWithEWSItemIds:(id)a0 folderIdString:(id)a1;
- (id)initWithEWSItemIds:(id)a0 folderIdString:(id)a1 gateway:(id)a2;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;
- (void)setupOfflineResponse;

@end
