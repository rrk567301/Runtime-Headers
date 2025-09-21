@class CKDMarkAssetBrokenURLRequest;

@interface CKDMarkAssetBrokenURLRequestWrapperOperation : CKDOperation

@property (retain, nonatomic) CKDMarkAssetBrokenURLRequest *urlRequest;

- (id)activityCreate;
- (BOOL)shouldCheckAppVersion;
- (void)main;
- (int)operationType;
- (void).cxx_destruct;

@end
