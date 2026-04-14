@interface CLAutoCohortUtilities : NSObject

+ (void)markUnvettedUnsafe;
+ (void)applyEdges:(id)a0 toGraph:(id)a1;
+ (void)markUnvettedSafe;
+ (id)readEdges:(id)a0;
+ (id)getUnsafeEdges;
+ (void)createDirectoryAtPath:(id)a0;
+ (BOOL)isEdgeKnownToCauseCycle:(id)a0;
+ (void)markUnvetted:(id)a0;
+ (void)persistEdgeFrom:(id)a0 to:(id)a1;
+ (id)getSafeEdges;
+ (id)layerAssignmentForNode:(id)a0 inGraph:(id)a1 extendingLayering:(id)a2;
+ (BOOL)autoCohortingEnabled;
+ (void)writeEdge:(id)a0 toDirectory:(id)a1;
+ (id)computeAutoCohortMapWithStarterGraph:(id)a0;
+ (void)enableAutoCohortingForProcessAtPath:(id)a0;
+ (id)getUnvettedEdges;
+ (id)getEdgeFilesFromDirectory:(id)a0;

@end
