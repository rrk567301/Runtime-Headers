@class NSMutableSet;

@interface CNCoreRecentsSaveRequest : CNSaveRequest

@property (retain, nonatomic) NSMutableSet *mutableDeletedRecentContacts;

- (id)storeIdentifier;
- (void).cxx_destruct;
- (void)deleteRecentContact:(id)a0;
- (void)deleteRecentContacts:(id)a0;
- (id)deletedRecentContacts;

@end
