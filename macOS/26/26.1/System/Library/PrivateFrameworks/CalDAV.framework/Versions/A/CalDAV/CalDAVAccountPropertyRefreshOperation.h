@class NSObject;
@protocol OS_dispatch_group, CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    NSObject<OS_dispatch_group> *_defaultAlarmGroup;
}

@property (nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate;
@property (nonatomic) BOOL fetchPrincipalSearchProperties;

- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void)_reallyRefreshProperties;
- (BOOL)shouldRefreshDefaultAlarms;
- (void)_refreshDefaultAlarms;
- (id)_copyHomePropertiesPropFindElements;
- (void)sendLocallyChangedPropertiesIfNeeded;
- (void).cxx_destruct;
- (id)propPatchForProperty:(id)a0 value:(id)a1;
- (void)_finishCalDAVAccountPropertyRefreshOperationWithError:(id)a0;
- (void)getAccountPropertiesTask:(id)a0 completedWithError:(id)a1;
- (id)initWithPrincipal:(id)a0;
- (BOOL)shouldKeepDefaultAlarmError:(id)a0;
- (void)refreshProperties;

@end
