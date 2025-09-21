@class CKDContainerServerInfo, NSObject;
@protocol OS_dispatch_group;

@interface CKDContainerSpecificInfoOperation : CKDOperation

@property (copy, nonatomic) CKDContainerServerInfo *containerServerInfo;
@property (nonatomic) char requireUserIDs;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *infoFetchedGroup;

- (void).cxx_destruct;
- (void)main;
- (void)setCompletionBlock:(id /* block */)a0;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (char)shouldCheckAppVersion;

@end
