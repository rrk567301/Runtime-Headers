@class NSString, NSSet, NSURL, NSMutableSet;
@protocol CoreDAVGetAccountPropertiesTaskGroupDelegate;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate> {
    NSMutableSet *_redirectHistory;
}

@property (readonly, nonatomic) NSURL *principalURL;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSURL *resourceID;
@property (readonly, nonatomic) NSSet *emailAddresses;
@property (readonly, nonatomic) NSSet *collections;
@property (readonly, nonatomic) NSSet *principalSearchProperties;
@property (readonly, nonatomic) BOOL isExpandPropertyReportSupported;
@property (nonatomic) BOOL fetchPrincipalSearchProperties;
@property (weak, nonatomic) id<CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate;
@property (nonatomic) BOOL shouldIgnoreHomeSetOnDifferentHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void)coaxServerForPrincipalHeaders;
- (void)processPrincipalHeaders:(id)a0;
- (BOOL)forceOptionsRequest;
- (void)startTaskGroup;
- (void)_taskCompleted:(id)a0 withError:(id)a1;
- (void)_setPropertiesFromParsedResponses:(id)a0;
- (id)homeSet;
- (id)_copyAccountPropertiesPropFindElements;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (id)initWithAccountInfoProvider:(id)a0 taskManager:(id)a1;
- (void)searchPropertySetTask:(id)a0 completetWithPropertySearchSet:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)taskGroupWillCancelWithError:(id)a0;

@end
