@class NSString, NSError;

@interface ILMessageFilterQueryResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) long long action;
@property (nonatomic) long long subAction;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)isEqualToQueryResponse:(id)a0;

@end
