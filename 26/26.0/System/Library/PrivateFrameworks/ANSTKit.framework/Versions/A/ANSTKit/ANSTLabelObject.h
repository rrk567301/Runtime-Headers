@class NSString;

@interface ANSTLabelObject : ANSTObject

@property (readonly, copy, nonatomic) NSString *label;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObjectID:(unsigned long long)a0 category:(id)a1 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 confidence:(float)a3;

@end
