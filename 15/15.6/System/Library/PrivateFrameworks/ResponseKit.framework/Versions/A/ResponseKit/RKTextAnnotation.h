@interface RKTextAnnotation : NSObject

@property struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property unsigned long long type;
@property char machineGenerated;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 andType:(unsigned long long)a1 machineGenerated:(char)a2;

@end
