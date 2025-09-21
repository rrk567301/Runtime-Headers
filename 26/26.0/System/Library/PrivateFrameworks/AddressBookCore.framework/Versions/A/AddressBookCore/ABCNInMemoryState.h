@class NSMutableDictionary, ABCNContactIdentifier;

@interface ABCNInMemoryState : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_contactsByIdentifier;
    NSMutableDictionary *_groupsByIdentifier;
    ABCNContactIdentifier *_meCardIdentifier;
}

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)meCardIdentifier;
- (id)initWithState:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allContacts;
- (id)init;
- (id)contactsWithIdentifiers:(id)a0;
- (id)contactWithIdentifier:(id)a0;
- (id)contactsMatchingPredicate:(id)a0;
- (id)contactsPassingTest:(id /* block */)a0;
- (id)contactsWithLinkIdentifier:(id)a0;
- (id)groupsMatchingPredicate:(id)a0;
- (id)groupsPassingTest:(id /* block */)a0;

@end
