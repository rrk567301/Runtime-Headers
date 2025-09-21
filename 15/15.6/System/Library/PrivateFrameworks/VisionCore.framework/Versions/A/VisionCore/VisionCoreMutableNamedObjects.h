@interface VisionCoreMutableNamedObjects : VisionCoreNamedObjects

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (char)assignPixelBuffer:(struct __CVBuffer { } *)a0 toName:(id)a1 error:(id *)a2;
- (char)assignSurface:(struct __IOSurface { } *)a0 toName:(id)a1 error:(id *)a2;
- (char)assignData:(id)a0 toName:(id)a1 error:(id *)a2;
- (char)assignObject:(id)a0 toName:(id)a1 error:(id *)a2;
- (void)removeAssignmentForName:(id)a0;

@end
