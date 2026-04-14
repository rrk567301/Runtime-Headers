@interface MFMailboxTransformer : NSObject

- (id)init;
- (id)transformMailbox:(id)a0 legacyMailboxToMailboxMap:(id)a1 objectIDToLegacyMailboxMap:(id)a2;
- (id)_transformMailbox:(id)a0 parent:(id)a1 legacyMailboxToMailboxMap:(id)a2 objectIDToLegacyMailboxMap:(id)a3;

@end
