@interface PFMirroredRelationship : NSObject

+ (char)isValidMirroredRelationshipRecord:(id)a0 values:(id)a1;

- (char)updateRelationshipValueUsingImportContext:(id)a0 andManagedObjectContext:(id)a1 error:(id *)a2;

@end
