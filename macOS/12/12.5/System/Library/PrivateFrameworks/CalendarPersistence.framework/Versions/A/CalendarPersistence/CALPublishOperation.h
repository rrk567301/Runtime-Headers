@class NSError, NSMutableDictionary;
@protocol CALPublishOperationDelegate;

@interface CALPublishOperation : NSObject {
    long long _operationProgress;
    long long _operationTotal;
    NSMutableDictionary *_privateInfos;
    id<CALPublishOperationDelegate> _delegate;
    BOOL _useKerberos;
    NSError *_error;
}

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)error;
- (void)setError:(id)a0;
- (void)setEtag:(id)a0;
- (id)publisher;
- (BOOL)useKerberos;
- (void)setUseKerberos:(BOOL)a0;
- (void)setInfo:(id)a0 forKey:(id)a1;
- (id)infoForKey:(id)a0;
- (void)removeInfoForKey:(id)a0;
- (void)setFirstPublish:(BOOL)a0;
- (void)publish:(id)a0 automatic:(BOOL)a1;
- (void)unpublishWithAutomatic:(BOOL)a0;
- (id)initWithPublisher:(id)a0;
- (long long)operationProgress;
- (long long)operationTotal;
- (void)abortOperation;

@end
