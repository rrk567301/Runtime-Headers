@class NSString;
@protocol CoreDAVMoveTaskDelegate;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask

@property (weak, nonatomic) id<CoreDAVMoveTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousETag;

- (id)httpMethod;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (void)_callBackToDelegateWithResponses:(id)a0 error:(id)a1;

@end
