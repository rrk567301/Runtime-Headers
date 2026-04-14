@class NSObject;
@protocol OS_dispatch_group, CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    NSObject<OS_dispatch_group> *_defaultAlarmGroup;
}

@property (nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate;
@property (nonatomic) BOOL fetchPrincipalSearchProperties;

- (void).cxx_destruct;
- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (id)initWithPrincipal:(id)a0;
- (id)propPatchForProperty:(id)a0 value:(id)a1;
- (void)sendLocallyChangedPropertiesIfNeeded;
- (void)refreshProperties;
- (void)_reallyRefreshProperties;
- (void)getAccountPropertiesTask:(id)a0 completedWithError:(id)a1;
- (BOOL)shouldRefreshDefaultAlarms;
- (void)_refreshDefaultAlarms;
- (id)_copyHomePropertiesPropFindElements;
- (BOOL)shouldKeepDefaultAlarmError:(id)a0;
- (void)_finishCalDAVAccountPropertyRefreshOperationWithError:(id)a0;

@end
