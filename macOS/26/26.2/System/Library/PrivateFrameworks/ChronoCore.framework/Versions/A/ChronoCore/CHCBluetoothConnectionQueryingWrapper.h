@protocol CHCBluetoothConnectionQuerying;

@interface CHCBluetoothConnectionQueryingWrapper : NSObject

@property (retain, nonatomic) id<CHCBluetoothConnectionQuerying> querying;

- (BOOL)isApplicationConnectedToAnyPeripherals:(id)a0;
- (void).cxx_destruct;
- (id)initWithQuerying:(id)a0;

@end
