@class NSPersistentStoreRequest;

@interface CNContactPosterDataDeleteRequest : CNContactPosterDataChangeRequest

@property (readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;

- (void)acceptVisitor:(id)a0;

@end
