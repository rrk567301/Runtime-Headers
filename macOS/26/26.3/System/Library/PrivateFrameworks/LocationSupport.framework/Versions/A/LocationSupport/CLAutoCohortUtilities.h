@interface CLAutoCohortUtilities : NSObject

+ (void)markUnvettedSafe;
+ (id)getUnvettedEdges;
+ (void)markUnvetted:(id)a0;
+ (void)writeEdge:(id)a0 toDirectory:(id)a1;
+ (id)getEdgeFilesFromDirectory:(id)a0;
+ (BOOL)autoCohortingEnabled;
+ (void)enableAutoCohortingForProcessAtPath:(id)a0;
+ (id)readEdges:(id)a0;
+ (id)getSafeEdges;
+ (id)getUnsafeEdges;
+ (id)layerAssignmentForNode:(id)a0 inGraph:(id)a1 extendingLayering:(id)a2;
+ (void)persistEdgeFrom:(id)a0 to:(id)a1;
+ (void)createDirectoryAtPath:(id)a0;
+ (BOOL)isEdgeKnownToCauseCycle:(id)a0;
+ (void)markUnvettedUnsafe;
+ (id)computeAutoCohortMapWithStarterGraph:(id)a0;
+ (void)applyEdges:(id)a0 toGraph:(id)a1;

@end
