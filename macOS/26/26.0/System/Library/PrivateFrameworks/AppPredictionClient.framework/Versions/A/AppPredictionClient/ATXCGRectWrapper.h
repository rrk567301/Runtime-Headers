@interface ATXCGRectWrapper : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToATXCGRectWrapper:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
