@interface NSVB_AnimationFencingSupport

+ (void /* unknown type, empty encoding */)initialize;
+ (id)_fenceContext;
+ (unsigned int)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)a0 andPreCommitHandler:(id /* block */)a1;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)a0;
+ (unsigned int)_synchronizeDrawingAcrossProcessesWithPreCommitHandler:(id /* block */)a0;
+ (id)_currentAnimationAttributes:(BOOL)a0;
+ (void)_animateWithAttributes:(id)a0 animations:(id /* block */)a1;

@end
