@class NSUUID, NSArray, NSString, LAAuthentication;

@interface LAAuthenticationUsers : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (weak, nonatomic) LAAuthentication *authentication;
@property (retain, nonatomic) NSArray *availableUsers;
@property (nonatomic) BOOL strictlyObeyAvailableUsers;
@property (retain, nonatomic) NSString *selectedUser;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)selectUser:(id)a0;

@end
