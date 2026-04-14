@class NSUUID, NSSet, NSMutableSet, CoreRCManager, NSObject;
@protocol OS_dispatch_queue, CoreRCBusDelegate;

@interface CoreRCBus : NSObject <NSCopying, NSSecureCoding> {
    id<CoreRCBusDelegate> _delegate;
    CoreRCManager *_manager;
    unsigned int _assertionID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableSet *devicesInternal;
@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) BOOL allowHibernation;
@property (readonly, nonatomic) NSSet *devices;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)manager;
- (void)setManager:(id)a0;
- (id)serialQueue;
- (id)devices;
- (void)addDevice:(id)a0;
- (void)removeDevice:(id)a0;
- (void)didRemoveDevice:(id)a0;
- (void)didAddDevice:(id)a0;
- (void)removeAllDevices;
- (int)_allowSleep;
- (void)willAddToManager:(id)a0;
- (void)willRemoveDevice:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)propertyForKey:(id)a0 error:(id *)a1;
- (id)initWithBus:(id)a0;
- (void)didUpdateProperties:(id)a0;
- (id)mergeProperties;
- (void)replaceDevice:(id)a0 withDevice:(id)a1;
- (void)willAddDevice:(id)a0;
- (void)didAddToManager:(id)a0;
- (void)willRemoveFromManager:(id)a0;
- (void)didRemoveFromManager:(id)a0;
- (void)mergePropertiesFromBus:(id)a0;
- (id)mergeDevice:(id)a0;
- (id)deviceOnBusEquivalentTo:(id)a0;
- (void)notifyDelegateDeviceAdded:(id)a0;
- (void)notifyDelegateDeviceRemoved:(id)a0;
- (void)notifyDelegateAllDevicesRemoved:(id)a0;
- (void)notifyDelegateDeviceUpdated:(id)a0;
- (int)_preventSleep;
- (BOOL)allowHibernation;
- (BOOL)setAllowHibernation:(BOOL)a0 error:(id *)a1;

@end
