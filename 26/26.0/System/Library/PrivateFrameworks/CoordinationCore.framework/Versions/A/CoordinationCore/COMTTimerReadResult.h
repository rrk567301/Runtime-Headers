@class NSArray;

@interface COMTTimerReadResult : COMTResult

@property (readonly, copy, nonatomic) NSArray *timers;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimers:(id)a0 actionIdentifier:(id)a1;

@end
