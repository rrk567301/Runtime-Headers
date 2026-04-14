@interface HDABuiltinCodecInterface : HDAInterface

+ (int)getBuiltInCodecIndex;
+ (int)getCodecCount;

- (void)dealloc;
- (id)init;
- (int)lockForExclusiveControl:(BOOL)a0;
- (int)codecPoweredOn;

@end
