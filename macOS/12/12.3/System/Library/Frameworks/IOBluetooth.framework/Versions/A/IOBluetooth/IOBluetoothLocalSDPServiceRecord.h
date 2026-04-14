@class NSDictionary, NSMutableSet, IOBluetoothUserNotification;

@interface IOBluetoothLocalSDPServiceRecord : IOBluetoothSDPServiceRecord <NSCoding, NSSecureCoding> {
    NSDictionary *mServerAttributeDictionary;
    NSDictionary *mLocalAttributeDictionary;
    NSMutableSet *mAllowedDevices;
    NSMutableSet *mRestrictedDevices;
    IOBluetoothUserNotification *mIncomingChannelNotification;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)withServerAttributeDictionary:(id)a0 localAttributeDictionary:(id)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPersistent;
- (id)initWithServerAttributeDictionary:(id)a0 localAttributeDictionary:(id)a1;
- (id)getLocalAttribute:(id)a0;
- (void)incomingRFCOMMChannel:(id)a0 channel:(id)a1;
- (void)incomingL2CAPChannel:(id)a0 channel:(id)a1;
- (id)getNameOfService;
- (BOOL)uniqueClientPerDevice;
- (void)launchApp:(id)a0 objectID:(unsigned long long)a1;
- (BOOL)uniqueClientPerService;
- (id)getServerAttributeDictionary;
- (id)getLocalAttributeDictionary;
- (BOOL)registerForIncomingChannelNotifications;
- (BOOL)unregisterForIncomingChannelNotifications;
- (BOOL)shouldVendServiceForUser:(int)a0;

@end
