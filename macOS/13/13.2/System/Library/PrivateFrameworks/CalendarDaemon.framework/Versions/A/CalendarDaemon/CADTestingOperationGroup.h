@interface CADTestingOperationGroup : CADOperationGroup <CADTestingInterface>

+ (BOOL)requiresEventAccess;

- (BOOL)accessGranted;
- (void)CADTestingSimulateDaemonCrash;
- (void)CADTestingCloseDatabase:(id /* block */)a0;
- (void)CADTestingBookmarkForURLWrapper:(id)a0 withReply:(id /* block */)a1;

@end
