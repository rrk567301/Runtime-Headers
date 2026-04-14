@class NSUUID, NSString;

@interface TUContinuityConversation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *displayName;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 displayName:(id)a1;

@end
