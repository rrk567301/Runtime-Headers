@class NSUUID, CoreRCManager, NSMutableSet;
@protocol CoreRCDeviceDelegate;

@interface CoreRCDevice : NSObject <NSCopying, NSSecureCoding> {
    id<CoreRCDeviceDelegate> _delegate;
    CoreRCManager *_manager;
    NSMutableSet *_owningClients;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) NSUUID *busUniqueID;
@property (readonly, nonatomic) BOOL isLocalDevice;

- (void)setManager:(id)a0;
- (id)manager;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)delegate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)bus;
- (id)mergeProperties;
- (unsigned long long)addOwningClient:(id)a0;
- (void)didAddToBus:(id)a0;
- (void)didRemoveFromBus:(id)a0;
- (id)extendedPropertyForKey:(id)a0 error:(id *)a1;
- (id)initWithBus:(id)a0 local:(BOOL)a1;
- (void)mergePropertiesFromDevice:(id)a0;
- (void)readyToSend;
- (void)receivedHIDEvent:(id)a0 fromDevice:(id)a1;
- (unsigned long long)removeAllOwningClients;
- (unsigned long long)removeOwningClient:(id)a0;
- (BOOL)sendCommand:(unsigned long long)a0 target:(id)a1 withDuration:(unsigned long long)a2 error:(id *)a3;
- (BOOL)sendHIDEvent:(id)a0 error:(id *)a1;
- (BOOL)sendHIDEvent:(id)a0 target:(id)a1 error:(id *)a2;
- (BOOL)setExtendedProperty:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)willAddToBus:(id)a0;
- (void)willRemoveFromBus:(id)a0;

@end
