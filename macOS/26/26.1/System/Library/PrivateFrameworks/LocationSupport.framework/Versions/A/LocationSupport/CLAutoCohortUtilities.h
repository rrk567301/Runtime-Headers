@interface CLAutoCohortUtilities : NSObject

+ (BOOL)autoCohortingEnabled;
+ (void)writeEdge:(id)a0 toDirectory:(id)a1;
+ (void)markUnvettedUnsafe;
+ (id)readEdges:(id)a0;
+ (void)markUnvettedSafe;
+ (BOOL)isEdgeKnownToCauseCycle:(id)a0;
+ (id)getUnvettedEdges;
+ (id)getEdgeFilesFromDirectory:(id)a0;
+ (void)markUnvetted:(id)a0;
+ (void)applyEdges:(id)a0 toGraph:(id)a1;
+ (void)createDirectoryAtPath:(id)a0;
+ (id)getSafeEdges;
+ (id)getUnsafeEdges;
+ (void)enableAutoCohortingForProcessAtPath:(id)a0;
+ (id)computeAutoCohortMapWithStarterGraph:(id)a0;
+ (void)persistEdgeFrom:(id)a0 to:(id)a1;
+ (id)layerAssignmentForNode:(id)a0 inGraph:(id)a1 extendingLayering:(id)a2;

@end
