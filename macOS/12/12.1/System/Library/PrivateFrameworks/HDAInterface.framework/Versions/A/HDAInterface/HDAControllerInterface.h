@interface HDAControllerInterface : HDAInterface

+ (int)getControllerCount;
+ (int)getBuiltInControllerIndex;

- (void)dealloc;
- (id)init:(BOOL)a0;

@end
