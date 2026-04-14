@interface NSVB_AnimationFencingSupport

+ (void /* unknown type, empty encoding */)initialize;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)a0;
+ (id)_fenceContext;
+ (unsigned int)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)a0 andPreCommitHandler:(id /* block */)a1;
+ (unsigned int)_synchronizeDrawingAcrossProcessesWithPreCommitHandler:(id /* block */)a0;
+ (id)_currentAnimationAttributes:(BOOL)a0;
+ (void)_animateWithAttributes:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;

@end
