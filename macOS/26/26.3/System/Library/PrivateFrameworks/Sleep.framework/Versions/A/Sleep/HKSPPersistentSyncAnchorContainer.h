@protocol HKSPUserDefaults;

@interface HKSPPersistentSyncAnchorContainer : HKSPSyncAnchorContainer {
    id<HKSPUserDefaults> _defaults;
}

+ (BOOL)supportsSecureCoding;

- (id)lock_getSyncAnchorForKey:(id)a0;
- (id)initWithIdentifier:(id)a0 defaults:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)lock_removeSyncAnchorForKey:(id)a0;
- (id)inMemoryCopy;
- (void)lock_setSyncAnchor:(id)a0 forKey:(id)a1;

@end
