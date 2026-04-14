@interface FI_TScreen : NSObject

+ (id)primaryScreen;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })primaryScreenFrame;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })primaryScreenVisibleFrame;
+ (unsigned int)primaryScreenDisplayID;
+ (double)cgScaleFactorForScreen:(id)a0;
+ (double)primaryScreenCGScaleFactor;
+ (double)cgScaleFactorForGreatestAreaScreenRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
+ (struct set<double, std::less<double>, std::allocator<double>> { struct __tree<double, std::less<double>, std::allocator<double>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<double, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<double>> { unsigned long long x0; } x2; } x0; })availableScaleFactors;
+ (id)greatestAreaScreenForRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
+ (id)greatestAreaScreenForPoint:(const struct CGPoint { double x0; double x1; } *)a0;
+ (id)closestScreenForOffScreenRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
+ (id)closestScreenForOffScreenPoint:(const struct CGPoint { double x0; double x1; } *)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })availableWindowPositioningBoundsForRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })availableWindowPositioningBoundsForPoint:(const struct CGPoint { double x0; double x1; } *)a0;
+ (id)screenWithDisplayID:(unsigned int)a0;
+ (BOOL)forceWindowOntoPrimaryDisplay:(id)a0 offsetFromBottom:(double)a1;
+ (struct CGSize { double x0; double x1; })backupWindowMaximumSize;
+ (double)minimumBackupDistanceFromMonitorEdge;

@end
