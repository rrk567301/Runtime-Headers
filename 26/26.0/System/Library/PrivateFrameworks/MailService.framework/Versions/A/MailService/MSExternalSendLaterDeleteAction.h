@class NSNumber;

@interface MSExternalSendLaterDeleteAction : MSExternalAction

@property (readonly) NSNumber *libraryID;

+ (id)entityName;

- (id)initWithManagedObject:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLibraryID:(id)a0;
- (id)managedObjectForContext:(id)a0;

@end
