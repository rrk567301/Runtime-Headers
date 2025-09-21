@class NSManagedObjectID;

@interface MKFObjectDatabaseID : HMFObject

@property (readonly, copy) NSManagedObjectID *objectID;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMKFObject:(id)a0;

@end
