@interface ABCNMutableInMemoryState : ABCNInMemoryState

- (void)removeContact:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMeCardIdentifier:(id)a0;
- (void)addContact:(id)a0;
- (void)addGroup:(id)a0;
- (void)removeGroup:(id)a0;

@end
