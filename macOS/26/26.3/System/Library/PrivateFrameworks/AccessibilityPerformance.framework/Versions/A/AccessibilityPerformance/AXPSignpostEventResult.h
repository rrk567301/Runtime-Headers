@class AXPSignpostEvent;

@interface AXPSignpostEventResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) AXPSignpostEvent *event;
@property (nonatomic) double secondsOffset;
@property (nonatomic) long long warning;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
