@class _TtC18ActivityUIServices18ActivityEdgeInsets, NSString;

@interface ActivityUIServices.ActivitySceneMetrics : NSObject <NSSecureCoding, BSXPCCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) _TtC18ActivityUIServices18ActivityEdgeInsets *edgeInsets;
@property (nonatomic, readonly) NSString *description;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 edgeInsets:(id)a2;

@end
