@class NSObject;
@protocol OS_dispatch_group, CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    NSObject<OS_dispatch_group> *_defaultAlarmGroup;
}

@property (nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate;
@property (nonatomic) BOOL fetchPrincipalSearchProperties;

- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void)getAccountPropertiesTask:(id)a0 completedWithError:(id)a1;
- (void)refreshProperties;
- (void)_finishCalDAVAccountPropertyRefreshOperationWithError:(id)a0;
- (id)_copyHomePropertiesPropFindElements;
- (void)_refreshDefaultAlarms;
- (BOOL)shouldKeepDefaultAlarmError:(id)a0;
- (void).cxx_destruct;
- (void)_reallyRefreshProperties;
- (id)propPatchForProperty:(id)a0 value:(id)a1;
- (void)sendLocallyChangedPropertiesIfNeeded;
- (BOOL)shouldRefreshDefaultAlarms;
- (id)initWithPrincipal:(id)a0;

@end
