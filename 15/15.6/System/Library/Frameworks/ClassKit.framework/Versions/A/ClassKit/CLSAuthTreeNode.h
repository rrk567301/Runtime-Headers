@class NSString;

@interface CLSAuthTreeNode : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *statusID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long status;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatusID:(id)a0 identifier:(id)a1 status:(long long)a2;

@end
