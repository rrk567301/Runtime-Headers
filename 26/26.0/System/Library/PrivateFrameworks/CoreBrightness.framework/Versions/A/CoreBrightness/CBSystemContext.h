@class NSString, CBPowerManagementModule;
@protocol CBPowerManagement;

@interface CBSystemContext : NSObject <CBSystemContext> {
    CBPowerManagementModule *_pm;
}

@property (readonly) id<CBPowerManagement> cbpm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setCbpm:(id)a0;

@end
