@class EFLocked;

@interface MFInMemoryThreadCollection_macOS : EDInMemoryThreadCollection

@property (class, readonly) EFLocked *inMemoryThreadCollections;

+ (id)messageThreadForObjectID:(id)a0;

- (id)initWithQuery:(id)a0 mailboxTypeResolver:(id)a1 dataSource:(id)a2 delgate:(id)a3 scheduler:(id)a4 logClient:(id)a5 limitedCache:(BOOL)a6;

@end
