@class NSArray;

@interface COTimerNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSArray *timers;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimers:(id)a0;

@end
