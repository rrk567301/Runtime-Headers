@class NSArray, MFEWSGetFolderResponseOperation;

@interface MFEWSGetFolderRequestOperation : MFEWSRequestOperation

@property (readonly, copy, nonatomic) NSArray *additionalProperties;
@property (readonly, copy, nonatomic) NSArray *EWSFolderIds;
@property (retain, nonatomic) MFEWSGetFolderResponseOperation *responseOperation;

- (void).cxx_destruct;
- (id)activityString;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;
- (BOOL)isFolderRequest;
- (id)initWithEWSFolderIds:(id)a0 additionalProperties:(id)a1 gateway:(id)a2 errorHandler:(id)a3;

@end
