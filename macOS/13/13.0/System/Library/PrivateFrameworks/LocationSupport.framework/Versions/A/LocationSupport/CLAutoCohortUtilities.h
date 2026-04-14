@interface CLAutoCohortUtilities : NSObject

+ (void)enableAutoCohortingForProcessAtPath:(id)a0;
+ (BOOL)autoCohortingEnabled;
+ (id)layerAssignmentForNode:(id)a0 inGraph:(id)a1 extendingLayering:(id)a2;
+ (void)applyEdges:(id)a0 toGraph:(id)a1;
+ (void)createDirectoryAtPath:(id)a0;
+ (id)getEdgeFilesFromDirectory:(id)a0;
+ (id)readEdges:(id)a0;
+ (id)getUnvettedEdges;
+ (id)getSafeEdges;
+ (id)getUnsafeEdges;
+ (void)writeEdge:(id)a0 toDirectory:(id)a1;
+ (void)persistEdgeFrom:(id)a0 to:(id)a1;
+ (void)markUnvetted:(id)a0;
+ (void)markUnvettedSafe;
+ (void)markUnvettedUnsafe;
+ (BOOL)isEdgeKnownToCauseCycle:(id)a0;
+ (id)computeAutoCohortMapWithStarterGraph:(id)a0;

@end
