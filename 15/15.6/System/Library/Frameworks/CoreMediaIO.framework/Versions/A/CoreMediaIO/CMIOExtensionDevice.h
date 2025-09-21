@class NSString, NSUUID, NSArray, NSMutableDictionary, CMIOExtensionProvider, NSMutableArray;
@protocol CMIOExtensionDeviceSource;

@interface CMIOExtensionDevice : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _streamsLock;
    NSMutableArray *_streams;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _changedPropertiesLock;
    NSMutableDictionary *_changedProperties;
    NSString *_description;
}

@property (nonatomic) char isRegistered;
@property (weak, nonatomic) CMIOExtensionProvider *parent;
@property (nonatomic, getter=isRunningSomewhere) char runningSomewhere;
@property (nonatomic) int deviceControlPID;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSUUID *deviceID;
@property (readonly, copy) NSString *legacyDeviceID;
@property (readonly, weak) id<CMIOExtensionDeviceSource> source;
@property (readonly, copy) NSArray *streams;

+ (id)deviceWithLocalizedName:(id)a0 deviceID:(id)a1 legacyDeviceID:(id)a2 source:(id)a3;
+ (id)deviceWithLocalizedName:(id)a0 deviceID:(id)a1 source:(id)a2;
+ (id)internalProperties;
+ (id)internalWritableProperties;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_clientQueue_internalPropertyStatesForProperties:(id)a0;
- (id)_clientQueue_setAndRemoveInternalPropertyValuesForClient:(id)a0 propertyValues:(id)a1 error:(id *)a2;
- (char)addStream:(id)a0 error:(id *)a1;
- (char)didRegister:(id *)a0;
- (void)didUnregister;
- (id)initWithLocalizedName:(id)a0 deviceID:(id)a1 legacyDeviceID:(id)a2 source:(id)a3;
- (id)initWithLocalizedName:(id)a0 deviceID:(id)a1 source:(id)a2;
- (void)notifyPropertiesChanged:(id)a0;
- (char)removeStream:(id)a0 error:(id *)a1;

@end
