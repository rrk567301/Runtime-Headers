@interface TSKit.TSKSimpleCollaborationSuspensionManager : NSObject <TSKit.TSKCollaborationSuspensionManager> {
    void /* unknown type, empty encoding */ suspendCollaborationReasons;
    void /* unknown type, empty encoding */ accessController;
}

@property (nonatomic, readonly) BOOL isCollaborationSuspended;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccessController:(id)a0;
- (void)suspendCollaborationWithReason:(id)a0;
- (void)resumeCollaborationWithReason:(id)a0;

@end
