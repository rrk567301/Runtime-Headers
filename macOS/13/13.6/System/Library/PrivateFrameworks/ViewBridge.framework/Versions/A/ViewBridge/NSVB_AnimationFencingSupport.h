@interface NSVB_AnimationFencingSupport

+ (void /* unknown type, empty encoding */)initialize;
+ (unsigned int)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)a0 andPreCommitHandler:(id /* block */)a1;
+ (void)_animateWithAttributes:(id)a0 animations:(id /* block */)a1;
+ (id)_currentAnimationAttributes:(BOOL)a0;
+ (id)_fenceContext;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)a0;
+ (unsigned int)_synchronizeDrawingAcrossProcessesWithPreCommitHandler:(id /* block */)a0;

@end
