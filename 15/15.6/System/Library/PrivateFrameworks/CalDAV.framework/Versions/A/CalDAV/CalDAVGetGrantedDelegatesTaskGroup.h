@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup

@property (nonatomic) int state;
@property (nonatomic) char fetchPrincipalDetails;

- (void)_fetchOnlyHrefs;
- (void)_expandPropertiesWithAllowWrite:(char)a0;
- (void)_finishWithError:(id)a0 state:(int)a1;
- (void)_getChildProperties;
- (id)_urlAppendingSegmentWithAllowWrite:(char)a0;
- (id)initWithAccountInfoProvider:(id)a0 principalURL:(id)a1 taskManager:(id)a2;
- (void)startTaskGroup;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;

@end
