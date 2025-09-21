@class NSError, NSSet, NSString;

@interface AXSSMotionTrackingState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSError *error;
@property (nonatomic) struct CGPoint { double x; double y; } lookAtPoint;
@property (copy, nonatomic) NSSet *expressions;
@property (readonly, copy, nonatomic) NSString *debugString;
@property (readonly, nonatomic) BOOL hasFace;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)debugStringForTrackingType:(unsigned long long)a0;

@end
