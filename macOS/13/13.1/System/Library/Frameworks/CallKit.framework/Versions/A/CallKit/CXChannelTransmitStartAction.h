@class NSDate;

@interface CXChannelTransmitStartAction : CXChannelAction

@property (retain, nonatomic) NSDate *startDate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)fulfill;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)fulfillWithStartDate:(id)a0;
- (void)updateAsFulfilledWithStartDate:(id)a0;

@end
