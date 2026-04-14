@interface DRHIDClientDM6 : DRHIDClient

- (void)reset;
- (id)init;
- (void)setReport:(id)a0;
- (void)handleEvent:(id)a0 withService:(id)a1;
- (void)serviceAdded:(id)a0;
- (void)serviceRemoved:(id)a0 resetReportInterval:(BOOL)a1;

@end
