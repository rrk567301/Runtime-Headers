@class CKDMarkAssetBrokenURLRequest;

@interface CKDMarkAssetBrokenURLRequestWrapperOperation : CKDOperation

@property (retain, nonatomic) CKDMarkAssetBrokenURLRequest *urlRequest;

- (BOOL)shouldCheckAppVersion;
- (id)activityCreate;
- (int)operationType;
- (void)main;
- (void).cxx_destruct;

@end
