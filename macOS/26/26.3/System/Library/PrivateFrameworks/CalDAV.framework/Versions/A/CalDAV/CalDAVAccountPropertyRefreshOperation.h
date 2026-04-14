@class NSObject;
@protocol OS_dispatch_group, CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    NSObject<OS_dispatch_group> *_defaultAlarmGroup;
}

@property (nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate;
@property (nonatomic) BOOL fetchPrincipalSearchProperties;

- (void)refreshProperties;
- (id)propPatchForProperty:(id)a0 value:(id)a1;
- (void)getAccountPropertiesTask:(id)a0 completedWithError:(id)a1;
- (id)initWithPrincipal:(id)a0;
- (void)_finishCalDAVAccountPropertyRefreshOperationWithError:(id)a0;
- (void)sendLocallyChangedPropertiesIfNeeded;
- (id)_copyHomePropertiesPropFindElements;
- (void)_refreshDefaultAlarms;
- (void).cxx_destruct;
- (void)_reallyRefreshProperties;
- (BOOL)shouldRefreshDefaultAlarms;
- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (BOOL)shouldKeepDefaultAlarmError:(id)a0;

@end
