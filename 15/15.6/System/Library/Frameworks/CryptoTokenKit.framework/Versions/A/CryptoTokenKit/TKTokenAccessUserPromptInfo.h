@class NSString, NSUUID;

@interface TKTokenAccessUserPromptInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *clientDisplayName;
@property (readonly, nonatomic) NSString *providerDisplayName;
@property (readonly, nonatomic) NSUUID *correlationID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTokenAccessRequest:(id)a0;

@end
