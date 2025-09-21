@class CXHandoffContext, NSDate;

@interface CXPullCallAction : CXCallAction

@property (copy, nonatomic) NSDate *dateConnected;
@property (retain, nonatomic) CXHandoffContext *handoffContext;

+ (char)supportsSecureCoding;
+ (double)timeout;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fulfill;
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (void)fulfillWithDateConnected:(id)a0;
- (void)updateAsFulfilledWithDateConnected:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
