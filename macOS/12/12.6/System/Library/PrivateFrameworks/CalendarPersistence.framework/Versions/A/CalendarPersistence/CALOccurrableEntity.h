@class NSManagedObjectID;

@interface CALOccurrableEntity : CALAbstractEntity {
    NSManagedObjectID *_managedObjectID;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)managedObjectID;
- (void)setManagedObjectID:(id)a0;
- (id)expandOnTimeRange:(id)a0;
- (id)getOccurrenceForStartDate:(id)a0;

@end
