@interface RSDoorWindowPostProcessor : NSObject

- (void)merge_door_instances:(id)a0 withWall:(id)a1 mergedCloseDoors:(id)a2 mergedOpenDoors:(id)a3;
- (void /* unknown type, empty encoding */)getSurface_center:(id)a0;
- (void /* unknown type, empty encoding */)getSurface_e_height:(id)a0;
- (void /* unknown type, empty encoding */)getSurface_e_width:(id)a0;
- (float)getSurface_height:(id)a0;
- (float)getSurface_width:(id)a0;
- (void)make_corners_order_consistent_with_wall:(id)a0 withWalls:(id)a1;
- (id)make_merged_instance:(id)a0 withFirstPoint:(SEL)a1 withLastPoint:(id)a2 withConfidence:(float)a3;
- (id)mergeDoors:(id)a0;
- (void)merge_doors_on_same_wall:(id)a0;

@end
