@class NSString, NSData, TAManagerProxy, NSNumber;

@interface TADevice : NSObject {
    TAManagerProxy *_proxy;
}

@property (retain, nonatomic) NSData *uid;
@property (retain, nonatomic) NSNumber *vendorID;
@property (retain, nonatomic) NSNumber *productID;
@property (retain, nonatomic) NSNumber *locationID;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *transport;
@property (retain, nonatomic) NSString *bluetoothAddress;

+ (id)deviceWithUID:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (char)isEqualToDevice:(id)a0;
- (char)authorizeWithCredentialSet:(id)a0 error:(id *)a1;
- (char)pairingState:(long long *)a0 error:(id *)a1;
- (char)isConnected:(char *)a0 error:(id *)a1;
- (char)authorizeWithTicket:(id)a0 error:(id *)a1;
- (id)generateAuthorizationNonceWithError:(id *)a0;
- (id)getNumberProperty:(unsigned int)a0;
- (id)getStringProperty:(unsigned int)a0;
- (char)injectSecureIntentWithError:(id *)a0;
- (char)pairWithError:(id *)a0;
- (char)testSecureSessionWithError:(id *)a0;
- (char)unpairWithError:(id *)a0;

@end
