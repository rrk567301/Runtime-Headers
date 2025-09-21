@interface AMRemoteActionViewInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) char translatesAutoresizingMaskIntoConstraints;
@property (nonatomic) unsigned long long autoresizingMask;
@property (readonly, nonatomic) char hasInternalConstraints;
@property (readonly, nonatomic) char hasMinimumHeightConstraint;

+ (id)remoteActionViewInfoForActionView:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 translatesAutoresizingMaskIntoConstraints:(char)a1 autoresizingMask:(unsigned long long)a2 hasInternalConstraints:(char)a3 hasMinimumHeightConstraint:(char)a4;

@end
