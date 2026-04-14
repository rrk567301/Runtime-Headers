@class NSManagedObjectID;

@interface _ICNFIMAPManagedObjectIDDetails : ICNFIMAPMessageDetails {
    NSManagedObjectID *_managedObjectID;
}

- (void).cxx_destruct;
- (id)description;
- (id)managedObjectID;
- (void)setManagedObjectID:(id)a0;
- (char)persistentIDType;

@end
