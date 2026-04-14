@interface CLAutoCohortUtilities : NSObject

+ (void)markUnvettedSafe;
+ (void)markUnvettedUnsafe;
+ (id)getSafeEdges;
+ (void)applyEdges:(id)a0 toGraph:(id)a1;
+ (void)enableAutoCohortingForProcessAtPath:(id)a0;
+ (BOOL)isEdgeKnownToCauseCycle:(id)a0;
+ (id)getEdgeFilesFromDirectory:(id)a0;
+ (id)layerAssignmentForNode:(id)a0 inGraph:(id)a1 extendingLayering:(id)a2;
+ (id)getUnsafeEdges;
+ (BOOL)autoCohortingEnabled;
+ (void)persistEdgeFrom:(id)a0 to:(id)a1;
+ (id)getUnvettedEdges;
+ (id)computeAutoCohortMapWithStarterGraph:(id)a0;
+ (void)createDirectoryAtPath:(id)a0;
+ (void)writeEdge:(id)a0 toDirectory:(id)a1;
+ (void)markUnvetted:(id)a0;
+ (id)readEdges:(id)a0;

@end
