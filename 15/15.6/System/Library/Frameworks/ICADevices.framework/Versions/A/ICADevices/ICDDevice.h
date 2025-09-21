@class NSLock, NSString, NSURL, ICDDeviceProfileHandler, NSMutableDictionary, NSDictionary, NSObject, NSMutableOrderedSet, NSNumber, NSMutableIndexSet;
@protocol OS_dispatch_source;

@interface ICDDevice : _ICDDirectoryObject {
    ICDDeviceProfileHandler *_deviceProfileHandler;
    char _IORegPath[512];
    NSString *_userAssignedName;
    NSLock *_userAssignedNameLock;
    char _disconnectIfSessionNotOpened;
    double _disconnectTime;
    NSMutableIndexSet *_clientAppPIDs;
    NSObject<OS_dispatch_source> *_timer;
    char _timerSuspended;
    double _currentTimeInterval;
}

@property (retain) NSString *transportType;
@property (copy) NSString *modulePath;
@property (copy) NSNumber *moduleVersion;
@property (copy) NSString *deviceIconPath;
@property (copy) NSDictionary *colorSyncProfiles;
@property char isOpened;
@property (readonly) unsigned int connectionID;
@property (readonly) struct __CFUUID { } *uuid;
@property (readonly) struct __CFUUID { } *persistentID;
@property unsigned int bufferSizeForMetadata;
@property (copy) NSString *colorSyncMode;
@property (readonly) NSMutableDictionary *mutablePropertyDictionary;
@property char deleteCanceled;
@property char scanCanceled;
@property char autoDisconnect;
@property char isBeingDisconnected;
@property (readonly) NSMutableOrderedSet *indexedObjects;
@property (retain) NSURL *securityScopedURL;
@property char usesLegacyKeys;

+ (short)setDevice:(id)a0;
+ (id)sharedDevice;

- (void)dealloc;
- (short)disconnect;
- (void)cancelTimer;
- (id)userAssignedName;
- (char)resumeTimer;
- (char)suspendTimer;
- (void)addDataArrayToDictionary:(id)a0;
- (void)addIndexArrayToDictionary:(id)a0;
- (void)addNewIndexedObject:(id)a0;
- (void)addObjectInfoForIndexes:(id)a0;
- (void)addObjectInfoForTree:(id)a0;
- (void)addObjectInfoToDict:(id)a0;
- (void)addOptimizedDataArrayToDictionary:(id)a0;
- (void)addTreeArrayToDictionary:(id)a0;
- (void)buildStandardProperties:(struct ICD_BulkNewPropertyPB { struct ICDHeader { short x0; unsigned long long x1; } x0; unsigned int x1; struct BulkNewPropertyData { unsigned int x0; struct ICAPropertyInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; unsigned int x2; } x2[1]; } *)a0 index:(unsigned int *)a1;
- (id)deviceColorSyncPath;
- (id)deviceColorSyncPathForMode:(id)a0;
- (id)deviceObject;
- (void)deviceRegistrationCallback:(struct ICD_DeviceRegisteredPB { struct ICAHeader { short x0; unsigned long long x1; } x0; struct ICAObjectInfo { unsigned int x0; unsigned int x1; } x1; unsigned int x2; char x3[32]; char x4[512]; unsigned int x5; unsigned long long x6; struct __CFDictionary *x7; unsigned int x8; })a0;
- (char)disconnectIfSessionNotOpened;
- (id)findICAObject:(unsigned int)a0;
- (id)findICAObjectsWithParent:(unsigned int)a0;
- (id)getObjectPropertyDictionary:(id)a0;
- (id)initWithObjectInformation:(void *)a0;
- (void)invalidateMetaData;
- (short)openDevice;
- (void)periodicTask;
- (void)registerDevice;
- (void)removeIndexedObject:(id)a0;
- (void)setDisconnectIfSessionNotOpened:(char)a0;
- (void)setUserAssignedName:(id)a0;
- (char)setupSecurityScopedURL:(id)a0;
- (void)setupTimer;
- (char)shouldDeviceDisconnect;
- (void)unregisterDevice;
- (void)updateDeviceDictionary:(id)a0;

@end
