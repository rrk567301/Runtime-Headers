@class NSArray, NSString, NSDictionary, WBSCRDTPosition, WebBookmark;

@interface WBDevice : NSObject <NSCopying, WBBookmarkRepresentable, WBSCloudTabProvider>

@property (copy, nonatomic) NSArray *unnamedMutableTabGroups;
@property (readonly, copy, nonatomic) NSArray *unnamedTabGroups;
@property (readonly, copy, nonatomic) NSString *profileIdentifier;
@property (readonly, copy, nonatomic) NSArray *tabs;
@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSString *serverID;
@property (readonly, nonatomic, getter=isRemoteDevice) BOOL remoteDevice;
@property (copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (retain, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) BOOL needsSecureDelete;
@property (readonly, copy, nonatomic) NSDictionary *modifiedSettingsFieldsByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *disambiguatedName;
@property (readonly, nonatomic, getter=isCloseRequestSupported) BOOL closeRequestSupported;

+ (id)localDeviceWithTitle:(id)a0 creationDeviceIdentifier:(id)a1 deviceIdentifier:(id)a2 unnamedTabGroups:(id)a3 profileIdentifier:(id)a4;
+ (id)remoteDeviceWithTitle:(id)a0 deviceIdentifier:(id)a1 unnamedTabGroups:(id)a2 profileIdentifier:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)_identifier;
- (BOOL)isInserted;
- (id)initWithBookmark:(id)a0;
- (id)initWithBookmark:(id)a0 unnamedTabGroups:(id)a1 profileIdentifier:(id)a2;
- (void)mergeWithDevice:(id)a0;

@end
