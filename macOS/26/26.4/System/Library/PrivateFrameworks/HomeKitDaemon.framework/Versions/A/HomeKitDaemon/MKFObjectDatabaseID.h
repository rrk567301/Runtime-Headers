@class NSManagedObjectID;

@interface MKFObjectDatabaseID : HMFObject

@property (readonly, copy) NSManagedObjectID *objectID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMKFObject:(id)a0;

@end
