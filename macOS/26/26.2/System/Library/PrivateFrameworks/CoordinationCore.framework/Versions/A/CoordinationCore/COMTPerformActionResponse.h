@class NSDictionary;

@interface COMTPerformActionResponse : COMessageChannelResponse

@property (readonly, copy, nonatomic) NSDictionary *results;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithResults:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
