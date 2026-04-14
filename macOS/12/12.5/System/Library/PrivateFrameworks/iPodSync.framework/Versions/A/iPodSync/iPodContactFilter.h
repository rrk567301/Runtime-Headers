@interface iPodContactFilter : NSObject <ISyncFiltering> {
    BOOL _needsUpdate;
    BOOL _useAllContacts;
    struct __CFArray { } *_usedContactGroups;
}

+ (void)setContactFilterHelper:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)needsUpdate;
- (void)setNeedsUpdate:(BOOL)a0;
- (id)supportedEntityNames;
- (BOOL)shouldApplyRecord:(id)a0 withRecordIdentifier:(id)a1;
- (void)setUseAllContacts:(BOOL)a0;
- (void)setUsedContactGroups:(struct __CFArray { } *)a0;
- (BOOL)useAllContacts;
- (struct __CFArray { } *)usedContactGroups;
- (struct __CFArray { } *)usedContactGroupIDsForSnapshot:(id)a0;
- (void)setUsedContactGroupIDs:(struct __CFArray { } *)a0 withSnapshot:(id)a1;

@end
