@class NSString, NSArray;

@interface MSPSharedTripSharingIdentity : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=hasValidAccount) char validAccount;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSArray *aliases;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValidAccount:(char)a0 name:(id)a1 handle:(id)a2 aliases:(id)a3;

@end
