@interface CADTestingOperationGroup : CADOperationGroup <CADTestingInterface>

+ (BOOL)requiresEventAccess;

- (BOOL)accessGranted;
- (void)CADTestingBookmarkForURLWrapper:(id)a0 withReply:(id /* block */)a1;
- (void)CADTestingSimulateDaemonCrash;
- (void)CADTestingCloseDatabase:(id /* block */)a0;

@end
