@class NSString;

@interface _EMSpecialMailboxScope : EMMailboxScope <EFCacheable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (id)cachedSelf;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)a0 forExclusion:(BOOL *)a1;
- (id)mailboxScopeByAddingMailboxes:(id)a0;
- (BOOL)excludeTypes;
- (BOOL)scopeContainsMailbox:(id)a0;
- (id)mailboxTypes;
- (id)ef_publicDescription;
- (id)mailboxObjectIDs;
- (BOOL)excludeMailboxes;
- (id)initWithIdentifier:(id)a0;
- (id)mailboxScopeByRemovingMailboxes:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)scopeContainsMailboxObjectID:(id)a0 mailboxTypeResolver:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
