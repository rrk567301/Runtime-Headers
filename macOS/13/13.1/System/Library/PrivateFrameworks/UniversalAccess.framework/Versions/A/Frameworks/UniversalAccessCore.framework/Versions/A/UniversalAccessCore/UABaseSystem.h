@class NSDictionary, NSNumber;

@interface UABaseSystem : NSObject

@property (copy, nonatomic, setter=_setPrebootPreferences:) NSDictionary *_prebootPreferences;
@property (readonly, nonatomic) NSNumber *_overriddenAccessibilityType;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) unsigned long long accessibilityType;
@property (readonly, nonatomic) BOOL hasPairedSystemPartition;
@property (readonly, nonatomic) BOOL hasPreboot;
@property (copy, nonatomic) NSDictionary *featurePreferences;

+ (id)shared;
+ (id)_expectedOSInstallSpecificPrebootURL;
+ (id)_prebootUUID;

- (BOOL)_canWriteToPrebootDirectly;
- (BOOL)_removePrebootDataAtURL:(id)a0 error:(id *)a1;
- (BOOL)_writePrebootData:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)_mountedPrebootPreferencesURL;
- (id)_mountedOSInstallSpecificPrebootURL;

@end
