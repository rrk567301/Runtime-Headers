@class NSSet, _CDInteractionStore, CNContactStore;

@interface _PSInteractionAndContactMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSSet *contactIdsSeen;
@property (copy, nonatomic) NSSet *contactIdsInContactStore;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)initWithInteractionStore:(id)a0 contactStore:(id)a1;
- (void)populateContactIdCachesWithMessageCache:(id)a0 shareCache:(id)a1;
- (void)notifyWhenContactAddedToInteractionStore:(id)a0;
- (void)fetchAllContactIdsFromContactStore;
- (void)notifyWhenContactStoreChanged;

@end
