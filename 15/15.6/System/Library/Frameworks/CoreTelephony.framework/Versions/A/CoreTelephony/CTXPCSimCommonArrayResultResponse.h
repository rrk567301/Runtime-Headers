@class NSArray;

@interface CTXPCSimCommonArrayResultResponse : CTXPCResponseMessage <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *result;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(id)a0;

@end
