@protocol HKSPUserDefaults;

@interface HKSPPersistentSyncAnchorContainer : HKSPSyncAnchorContainer {
    id<HKSPUserDefaults> _defaults;
}

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)inMemoryCopy;
- (id)initWithIdentifier:(id)a0 defaults:(id)a1;
- (id)lock_getSyncAnchorForKey:(id)a0;
- (void)lock_removeSyncAnchorForKey:(id)a0;
- (void)lock_setSyncAnchor:(id)a0 forKey:(id)a1;

@end
