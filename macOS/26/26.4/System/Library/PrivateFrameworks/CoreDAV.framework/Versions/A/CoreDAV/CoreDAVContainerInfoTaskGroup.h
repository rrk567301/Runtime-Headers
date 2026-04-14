@class NSString, NSMutableSet;
@protocol CoreDAVContainerInfoTaskGroupDelegate;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
    int _phase;
    NSMutableSet *_containers;
    NSString *_appSpecificHomeSetPropNameSpace;
    NSString *_appSpecificHomeSetPropName;
}

@property (nonatomic) int containerInfoDepth;
@property (weak, nonatomic) id<CoreDAVContainerInfoTaskGroupDelegate> delegate;
@property (readonly, nonatomic) NSMutableSet *containerURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)a0 andProperties:(id)a1;
- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void)startTaskGroup;
- (void).cxx_destruct;
- (void)taskGroupWillCancelWithError:(id)a0;
- (int)containerInfoDepthForURL:(id)a0;
- (id)initWithAccountInfoProvider:(id)a0 containerURLs:(id)a1 taskManager:(id)a2;
- (void)_getContainerHomeSet;
- (void)_getContainerTopLevelInfo;

@end
