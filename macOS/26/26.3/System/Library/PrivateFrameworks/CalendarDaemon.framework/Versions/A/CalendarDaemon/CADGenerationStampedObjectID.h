@interface CADGenerationStampedObjectID : CADObjectID

@property (readonly, nonatomic) int restoreGeneration;

- (id)initWithEntityType:(int)a0 entityID:(int)a1 generation:(int)a2;
- (id)initWithEntityType:(int)a0 entityID:(int)a1 databaseID:(int)a2 generation:(int)a3;
- (Class)classForCoder;
- (BOOL)isEqual:(id)a0;

@end
