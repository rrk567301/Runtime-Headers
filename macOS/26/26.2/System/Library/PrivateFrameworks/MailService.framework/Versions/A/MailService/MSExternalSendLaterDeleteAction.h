@class NSNumber;

@interface MSExternalSendLaterDeleteAction : MSExternalAction

@property (readonly) NSNumber *libraryID;

+ (id)entityName;

- (void).cxx_destruct;
- (id)initWithManagedObject:(id)a0;
- (id)description;
- (id)init;
- (id)initWithLibraryID:(id)a0;
- (id)managedObjectForContext:(id)a0;

@end
