@interface HDABuiltinCodecInterface : HDAInterface

+ (int)getCodecCount;
+ (int)getBuiltInCodecIndex;

- (void)dealloc;
- (id)init;
- (int)lockForExclusiveControl:(BOOL)a0;
- (int)codecPoweredOn;

@end
