@class NSObject;
@protocol OS_dispatch_group, CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    NSObject<OS_dispatch_group> *_defaultAlarmGroup;
}

@property (nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate;
@property (nonatomic) BOOL fetchPrincipalSearchProperties;

- (void)_refreshDefaultAlarms;
- (void)sendLocallyChangedPropertiesIfNeeded;
- (void)_reallyRefreshProperties;
- (void)_finishCalDAVAccountPropertyRefreshOperationWithError:(id)a0;
- (void)getAccountPropertiesTask:(id)a0 completedWithError:(id)a1;
- (BOOL)shouldKeepDefaultAlarmError:(id)a0;
- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (id)initWithPrincipal:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldRefreshDefaultAlarms;
- (id)propPatchForProperty:(id)a0 value:(id)a1;
- (void)refreshProperties;
- (id)_copyHomePropertiesPropFindElements;

@end
