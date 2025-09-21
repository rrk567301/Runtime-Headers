@class NSString;

@interface PPSocialPerson : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *displayName;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHandle:(id)a0 displayName:(id)a1;

@end
