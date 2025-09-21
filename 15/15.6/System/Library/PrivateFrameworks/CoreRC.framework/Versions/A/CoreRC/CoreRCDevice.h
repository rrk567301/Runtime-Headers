@class NSUUID, CoreRCManager, NSMutableSet;
@protocol CoreRCDeviceDelegate;

@interface CoreRCDevice : NSObject <NSCopying, NSSecureCoding> {
    id<CoreRCDeviceDelegate> _delegate;
    CoreRCManager *_manager;
    NSMutableSet *_owningClients;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) NSUUID *busUniqueID;
@property (readonly, nonatomic) char isLocalDevice;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)delegate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (id)manager;
- (void)setManager:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)bus;
- (id)mergeProperties;
- (unsigned long long)addOwningClient:(id)a0;
- (void)didAddToBus:(id)a0;
- (void)didRemoveFromBus:(id)a0;
- (id)extendedPropertyForKey:(id)a0 error:(id *)a1;
- (id)initWithBus:(id)a0 local:(char)a1;
- (void)mergePropertiesFromDevice:(id)a0;
- (void)readyToSend;
- (void)receivedHIDEvent:(id)a0 fromDevice:(id)a1;
- (unsigned long long)removeAllOwningClients;
- (unsigned long long)removeOwningClient:(id)a0;
- (char)sendCommand:(unsigned long long)a0 target:(id)a1 withDuration:(unsigned long long)a2 error:(id *)a3;
- (char)sendHIDEvent:(id)a0 error:(id *)a1;
- (char)sendHIDEvent:(id)a0 target:(id)a1 error:(id *)a2;
- (char)setExtendedProperty:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)willAddToBus:(id)a0;
- (void)willRemoveFromBus:(id)a0;

@end
