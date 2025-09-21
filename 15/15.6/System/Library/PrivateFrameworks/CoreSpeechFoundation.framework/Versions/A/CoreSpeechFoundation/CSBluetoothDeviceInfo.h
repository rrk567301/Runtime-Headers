@class NSString;

@interface CSBluetoothDeviceInfo : NSObject

@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) char supportDoAP;
@property (nonatomic) char supportMph;
@property (nonatomic) char isTemporaryPairedNotInContacts;

- (void).cxx_destruct;

@end
