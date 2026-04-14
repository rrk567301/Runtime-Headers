@class NSString, NSData, CNContainer, NSDate, CNProviderMetadata;

@interface CNMutableContainer : CNContainer

@property (copy) CNContainer *snapshot;
@property long long type;
@property int iOSLegacyIdentifier;
@property (copy) NSString *accountIdentifier;
@property (copy) NSString *externalIdentifier;
@property (copy) NSString *externalModificationTag;
@property (copy) NSString *externalSyncTag;
@property (copy) NSData *externalSyncData;
@property (copy) NSString *constraintsPath;
@property (copy) NSString *meIdentifier;
@property unsigned long long restrictions;
@property (getter=isGuardianStateDirty) BOOL guardianStateDirty;
@property (getter=isEnabled) BOOL enabled;
@property (getter=isGuardianRestricted) BOOL guardianRestricted;
@property (copy) NSDate *lastSyncDate;
@property (copy) NSString *providerIdentifier;
@property (copy) CNProviderMetadata *providerMetadata;
@property (copy) NSString *identifier;
@property (copy) NSString *name;

- (id)providerIdentifier;
- (void)setAccountIdentifier:(id)a0;
- (void)setSnapshot:(id)a0;
- (id)externalModificationTag;
- (void)setIdentifier:(id)a0;
- (id)name;
- (id)freeze;
- (void)setExternalModificationTag:(id)a0;
- (void)setProviderIdentifier:(id)a0;
- (void)setName:(id)a0;
- (void)setExternalIdentifier:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)copy;
- (void)setType:(long long)a0;
- (id)accountIdentifier;
- (long long)type;
- (id)externalIdentifier;
- (id)identifier;
- (unsigned long long)restrictions;
- (void)setRestrictions:(unsigned long long)a0;
- (int)iOSLegacyIdentifier;
- (id)providerMetadata;
- (void)setIOSLegacyIdentifier:(int)a0;
- (void)setProviderMetadata:(id)a0;
- (id)freezeWithSelfAsSnapshot;
- (id)constraintsPath;
- (id)externalSyncTag;
- (void)adoptValuesFromAndSetSnapshot:(id)a0;
- (id)externalSyncData;
- (id)meIdentifier;
- (void)setConstraintsPath:(id)a0;
- (void)setExternalSyncData:(id)a0;
- (void)setExternalSyncTag:(id)a0;
- (void)setGuardianRestricted:(BOOL)a0 shouldPushChangeToServer:(BOOL)a1;
- (void)setMeIdentifier:(id)a0;

@end
