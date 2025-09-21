@interface SHSignatureCrop : NSObject

+ (id)cropSignature:(id)a0 atPosition:(double)a1 withDuration:(double)a2 error:(id *)a3;
+ (BOOL)cropSignature:(id)a0 toDuration:(double)a1 stride:(double)a2 error:(id *)a3 callback:(id /* block */)a4;

@end
