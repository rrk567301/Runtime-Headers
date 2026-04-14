@class CKDMarkAssetBrokenURLRequest;

@interface CKDMarkAssetBrokenURLRequestWrapperOperation : CKDOperation

@property (retain, nonatomic) CKDMarkAssetBrokenURLRequest *urlRequest;

- (id)activityCreate;
- (void)main;
- (int)operationType;
- (BOOL)shouldCheckAppVersion;
- (void).cxx_destruct;

@end
