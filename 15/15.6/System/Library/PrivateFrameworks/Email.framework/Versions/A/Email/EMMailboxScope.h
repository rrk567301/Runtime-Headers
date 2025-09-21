@class NSString, NSSet;

@interface EMMailboxScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding> {
    unsigned long long _hash;
}

@property (class, readonly, nonatomic) EMMailboxScope *allMailboxesScope;
@property (class, readonly, nonatomic) EMMailboxScope *noMailboxesScope;
@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *mailboxTypes;
@property (readonly, nonatomic) char excludeTypes;
@property (readonly, copy, nonatomic) NSSet *mailboxObjectIDs;
@property (readonly, nonatomic) char excludeMailboxes;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mailboxScopeForMailboxObjectIDs:(id)a0 forExclusion:(char)a1;
+ (id)mailboxScopeForMailboxType:(long long)a0 forExclusion:(char)a1;
+ (id)mailboxScopeForMailboxTypes:(id)a0 forExclusion:(char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cachedSelf;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)a0 forExclusion:(char *)a1;
- (char)scopeContainsMailbox:(id)a0;
- (char)scopeContainsMailboxObjectID:(id)a0 mailboxTypeResolver:(id)a1;
- (void)_calculateHash;
- (id)_mailboxObjectIDsDescription;
- (id)_mailboxObjectIDsForTypesWithMailboxTypeResolver:(id)a0;
- (id)_mailboxTypesDescription;
- (char)_scopeContainsMailboxWithObjectID:(id)a0 mailboxTypeBlock:(id /* block */)a1;
- (char)containsOnlyInboxType;
- (id)initWithMailboxTypes:(id)a0 excludeTypes:(char)a1 mailboxObjectIDs:(id)a2 excludeMailboxes:(char)a3;
- (id)initWithMailboxTypes:(id)a0 excludeTypes:(char)a1 mailboxObjectIDs:(id)a2 excludeMailboxes:(char)a3 cached:(char)a4;
- (id)mailboxScopeByAddingMailboxes:(id)a0;
- (id)mailboxScopeByRemovingMailboxes:(id)a0;

@end
