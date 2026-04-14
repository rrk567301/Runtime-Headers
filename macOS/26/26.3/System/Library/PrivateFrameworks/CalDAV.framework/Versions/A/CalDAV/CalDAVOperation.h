@class NSMutableSet;
@protocol CalDAVPrincipal;

@interface CalDAVOperation : CoreDAVTaskGroup {
    BOOL _isCancellingTaskGroups;
}

@property (retain, nonatomic) id<CalDAVPrincipal> principal;
@property (retain, nonatomic) NSMutableSet *outstandingTaskGroups;

- (id)init;
- (id)initWithPrincipal:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelTaskGroup;
- (void)_tearDownAllTaskGroupsWithBlock:(id /* block */)a0;
- (void)bailWithError:(id)a0;

@end
