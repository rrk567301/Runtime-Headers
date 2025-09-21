@class NSString;

@interface ESEGrantedDelegate : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *preferredUserAddress;
@property (nonatomic) long long permission;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
