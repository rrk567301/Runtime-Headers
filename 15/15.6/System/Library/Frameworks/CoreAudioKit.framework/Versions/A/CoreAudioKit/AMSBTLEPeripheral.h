@class NSString, CBPeripheral, CBCentralManager;

@interface AMSBTLEPeripheral : NSObject {
    CBPeripheral *peripheral;
    NSString *uuid;
    NSString *name;
    CBCentralManager *centralManager;
    double lastSeen;
    char inputAvailable;
    char outputAvailable;
    char online;
    char available;
}

@property (readonly) CBPeripheral *peripheral;
@property (readonly, retain) NSString *uuid;
@property (retain) NSString *name;
@property double lastSeen;
@property char inputAvailable;
@property char outputAvailable;
@property (getter=isOnline) char online;
@property (getter=isChangingState) char changingState;
@property (getter=isAvailable) char available;

- (void)dealloc;
- (char)disconnect;
- (char)connect;
- (char)hidden;
- (char)canConnect;
- (id)initWithID:(id)a0 name:(id)a1 manager:(id)a2;
- (char)updateAvailableStateChanged;

@end
