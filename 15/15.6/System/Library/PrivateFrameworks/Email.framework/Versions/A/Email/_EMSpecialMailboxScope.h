@class NSString;

@interface _EMSpecialMailboxScope : EMMailboxScope <EFCacheable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (char)supportsSecureCoding;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)ef_publicDescription;
- (id)cachedSelf;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)a0 forExclusion:(char *)a1;
- (char)excludeMailboxes;
- (char)excludeTypes;
- (id)mailboxObjectIDs;
- (id)mailboxTypes;
- (char)scopeContainsMailbox:(id)a0;
- (char)scopeContainsMailboxObjectID:(id)a0 mailboxTypeResolver:(id)a1;
- (id)mailboxScopeByAddingMailboxes:(id)a0;
- (id)mailboxScopeByRemovingMailboxes:(id)a0;

@end
