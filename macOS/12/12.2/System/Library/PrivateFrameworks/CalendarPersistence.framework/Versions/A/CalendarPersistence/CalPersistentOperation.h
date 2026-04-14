@class NSManagedObjectID;

@interface CalPersistentOperation : CalOperation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSManagedObjectID *managedObjectID;
@property long long sequenceNumber;

+ (id)managedObjectIDForURIRepresentation:(id)a0;
+ (id)archive:(id)a0 inContext:(id)a1;
+ (id)dearchive:(id)a0;
+ (id)managedObjectIDsForURIRepresentations:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
