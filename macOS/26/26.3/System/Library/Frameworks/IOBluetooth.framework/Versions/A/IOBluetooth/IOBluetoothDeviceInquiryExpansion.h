@class NSArray, NSXPCConnection;

@interface IOBluetoothDeviceInquiryExpansion : NSObject

@property (copy) NSArray *searchUUIDs;
@property int searchType;
@property BOOL joinedToDaemon;
@property char rssiThreshold;
@property BOOL supportsSecureCoding;
@property (retain) NSXPCConnection *xpcConnection;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;

@end
