@class NSMutableDictionary, ABCNContactIdentifier;

@interface ABCNInMemoryState : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_contactsByIdentifier;
    NSMutableDictionary *_groupsByIdentifier;
    ABCNContactIdentifier *_meCardIdentifier;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithState:(id)a0;
- (id)allContacts;
- (id)meCardIdentifier;
- (id)contactsWithLinkIdentifier:(id)a0;
- (id)contactsMatchingPredicate:(id)a0;
- (id)contactsWithIdentifiers:(id)a0;
- (id)groupsMatchingPredicate:(id)a0;
- (id)contactsPassingTest:(id /* block */)a0;
- (id)groupsPassingTest:(id /* block */)a0;
- (id)contactWithIdentifier:(id)a0;

@end
