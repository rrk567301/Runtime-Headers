@interface _TtCCV13HomeDataModel9HomeState6Stream14MatterDelegate : NSObject <MTRDeviceDelegate> {
    void /* unknown type, empty encoding */ _stream;
    void /* unknown type, empty encoding */ matterSnapshotUpdateController;
}

- (id)init;
- (void)device:(id)a0 stateChanged:(unsigned long long)a1;
- (void)device:(id)a0 receivedEventReport:(id)a1;
- (void)device:(id)a0 receivedAttributeReport:(id)a1;
- (void).cxx_destruct;
- (void)deviceBecameActive:(id)a0;
- (void)deviceCachePrimed:(id)a0;
- (void)deviceConfigurationChanged:(id)a0;

@end
