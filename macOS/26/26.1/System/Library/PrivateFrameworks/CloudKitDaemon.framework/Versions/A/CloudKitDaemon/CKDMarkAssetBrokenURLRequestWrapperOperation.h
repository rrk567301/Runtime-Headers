@class CKDMarkAssetBrokenURLRequest;

@interface CKDMarkAssetBrokenURLRequestWrapperOperation : CKDOperation

@property (retain, nonatomic) CKDMarkAssetBrokenURLRequest *urlRequest;

- (id)activityCreate;
- (int)operationType;
- (void)main;
- (BOOL)shouldCheckAppVersion;
- (void).cxx_destruct;

@end
