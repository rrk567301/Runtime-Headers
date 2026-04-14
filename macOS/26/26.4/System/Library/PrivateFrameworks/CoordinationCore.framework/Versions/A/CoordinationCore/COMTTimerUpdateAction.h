@class MTTimer;

@interface COMTTimerUpdateAction : COMTAction

@property (readonly, copy, nonatomic) MTTimer *timer;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTimer:(id)a0;

@end
