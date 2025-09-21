@class NSString;

@interface ILMessageFilterQueryResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *version;
@property (nonatomic) long long action;
@property (nonatomic) long long subAction;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToQueryResponse:(id)a0;

@end
