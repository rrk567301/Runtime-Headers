@class NSString, NSError;

@interface ILMessageFilterQueryResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) long long action;
@property (nonatomic) long long subAction;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToQueryResponse:(id)a0;

@end
