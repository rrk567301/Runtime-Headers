@protocol CHCBluetoothConnectionQuerying;

@interface CHCBluetoothConnectionQueryingWrapper : NSObject

@property (retain, nonatomic) id<CHCBluetoothConnectionQuerying> querying;

- (void).cxx_destruct;
- (char)isApplicationConnectedToAnyPeripherals:(id)a0;
- (id)initWithQuerying:(id)a0;

@end
