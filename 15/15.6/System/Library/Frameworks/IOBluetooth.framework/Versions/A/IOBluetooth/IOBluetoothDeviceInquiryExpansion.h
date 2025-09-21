@class NSArray, NSXPCConnection;

@interface IOBluetoothDeviceInquiryExpansion : NSObject

@property (copy) NSArray *searchUUIDs;
@property int searchType;
@property char joinedToDaemon;
@property char rssiThreshold;
@property char supportsSecureCoding;
@property (retain) NSXPCConnection *xpcConnection;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (void).cxx_destruct;

@end
