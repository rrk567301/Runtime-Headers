@interface iPodContactFilter : NSObject <ISyncFiltering> {
    BOOL _needsUpdate;
    BOOL _useAllContacts;
    struct __CFArray { } *_usedContactGroups;
}

+ (void)setContactFilterHelper:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)needsUpdate;
- (void)setNeedsUpdate:(BOOL)a0;
- (BOOL)shouldApplyRecord:(id)a0 withRecordIdentifier:(id)a1;
- (id)supportedEntityNames;
- (struct __CFArray { } *)usedContactGroupIDsForSnapshot:(id)a0;
- (void)setUseAllContacts:(BOOL)a0;
- (void)setUsedContactGroupIDs:(struct __CFArray { } *)a0 withSnapshot:(id)a1;
- (void)setUsedContactGroups:(struct __CFArray { } *)a0;
- (BOOL)useAllContacts;
- (struct __CFArray { } *)usedContactGroups;

@end
