@class NSUUID, CoreRCManager;
@protocol CoreRCDeviceDelegate;

@interface CoreRCDevice : NSObject <NSCopying, NSSecureCoding> {
    id<CoreRCDeviceDelegate> _delegate;
    CoreRCManager *_manager;
    unsigned long long _owningClients;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) NSUUID *busUniqueID;
@property (readonly, nonatomic) BOOL isLocalDevice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)manager;
- (void)setManager:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)bus;
- (BOOL)setExtendedProperty:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)extendedPropertyForKey:(id)a0 error:(id *)a1;
- (void)receivedHIDEvent:(id)a0 fromDevice:(id)a1;
- (id)initWithBus:(id)a0 local:(BOOL)a1;
- (id)mergeProperties;
- (BOOL)sendHIDEvent:(id)a0 target:(id)a1 error:(id *)a2;
- (void)readyToSend;
- (void)mergePropertiesFromDevice:(id)a0;
- (BOOL)sendHIDEvent:(id)a0 error:(id *)a1;
- (BOOL)sendCommand:(unsigned long long)a0 target:(id)a1 withDuration:(unsigned long long)a2 error:(id *)a3;
- (void)willAddToBus:(id)a0;
- (void)didAddToBus:(id)a0;
- (void)willRemoveFromBus:(id)a0;
- (void)didRemoveFromBus:(id)a0;
- (unsigned long long)removeOwningClient:(id)a0;
- (unsigned long long)addOwningClient:(id)a0;

@end
