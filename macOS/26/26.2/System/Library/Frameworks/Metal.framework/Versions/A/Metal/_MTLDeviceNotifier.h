@interface _MTLDeviceNotifier : NSObject {
    id /* block */ _handler;
}

- (id)initWithHandler:(id /* block */)a0;
- (void)dealloc;
- (void)deviceWasAdded:(id)a0;
- (void)deviceRemovalRequested:(id)a0;
- (void)deviceWasRemoved:(id)a0;

@end
