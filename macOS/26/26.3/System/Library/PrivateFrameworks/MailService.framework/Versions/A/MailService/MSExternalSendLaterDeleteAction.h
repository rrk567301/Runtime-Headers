@class NSNumber;

@interface MSExternalSendLaterDeleteAction : MSExternalAction

@property (readonly) NSNumber *libraryID;

+ (id)entityName;

- (id)description;
- (id)initWithManagedObject:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLibraryID:(id)a0;
- (id)managedObjectForContext:(id)a0;

@end
