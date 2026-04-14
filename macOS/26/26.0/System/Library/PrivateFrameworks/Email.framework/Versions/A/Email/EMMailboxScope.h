@class NSString, NSSet;

@interface EMMailboxScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding> {
    unsigned long long _hash;
}

@property (class, readonly, nonatomic) EMMailboxScope *allMailboxesScope;
@property (class, readonly, nonatomic) EMMailboxScope *noMailboxesScope;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *mailboxTypes;
@property (readonly, nonatomic) BOOL excludeTypes;
@property (readonly, copy, nonatomic) NSSet *mailboxObjectIDs;
@property (readonly, nonatomic) BOOL excludeMailboxes;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mailboxScopeForMailboxTypes:(id)a0 forExclusion:(BOOL)a1;
+ (id)mailboxScopeForMailboxType:(long long)a0 forExclusion:(BOOL)a1;
+ (id)mailboxScopeForMailboxObjectIDs:(id)a0 forExclusion:(BOOL)a1;

- (id)cachedSelf;
- (void)_calculateHash;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)a0 forExclusion:(BOOL *)a1;
- (id)initWithMailboxTypes:(id)a0 excludeTypes:(BOOL)a1 mailboxObjectIDs:(id)a2 excludeMailboxes:(BOOL)a3 cached:(BOOL)a4;
- (id)mailboxScopeByAddingMailboxes:(id)a0;
- (BOOL)scopeContainsMailbox:(id)a0;
- (id)initWithMailboxTypes:(id)a0 excludeTypes:(BOOL)a1 mailboxObjectIDs:(id)a2 excludeMailboxes:(BOOL)a3;
- (BOOL)containsOnlyInboxType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mailboxScopeByRemovingMailboxes:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_mailboxObjectIDsForTypesWithMailboxTypeResolver:(id)a0;
- (BOOL)scopeContainsMailboxObjectID:(id)a0 mailboxTypeResolver:(id)a1;
- (id)init;
- (id)_mailboxTypesDescription;
- (BOOL)_scopeContainsMailboxWithObjectID:(id)a0 mailboxTypeBlock:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)_mailboxObjectIDsDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
