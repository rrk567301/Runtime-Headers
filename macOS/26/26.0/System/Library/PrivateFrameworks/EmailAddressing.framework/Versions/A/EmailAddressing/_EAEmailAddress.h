@class NSString;

@interface _EAEmailAddress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, copy, nonatomic) NSString *rawAddress;

- (void)encodeWithCoder:(id)a0;
- (id)initWithEmailAddress:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
