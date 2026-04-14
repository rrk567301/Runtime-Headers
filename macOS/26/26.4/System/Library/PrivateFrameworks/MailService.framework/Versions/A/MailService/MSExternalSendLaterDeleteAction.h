@class NSNumber;

@interface MSExternalSendLaterDeleteAction : MSExternalAction

@property (readonly) NSNumber *libraryID;

+ (id)entityName;

- (id)initWithManagedObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithLibraryID:(id)a0;
- (id)managedObjectForContext:(id)a0;

@end
