@class NSArray;

@interface COMTPerformActionRequest : COMessageChannelRequest

@property (readonly, copy, nonatomic) NSArray *actions;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithActions:(id)a0;

@end
