@class NSString, NSSet;

@interface HMDManagedObjectCodingChangeSetSummary : HMFObject

@property (readonly) NSString *shortDescriptionForChangeSet;
@property (readonly) NSSet *insertedObjectNames;
@property (readonly) NSSet *modifiedObjectPropertyNames;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithShortDescriptionForChangeSet:(id)a0 insertedObjectNames:(id)a1 modifiedObjectPropertyNames:(id)a2;

@end
