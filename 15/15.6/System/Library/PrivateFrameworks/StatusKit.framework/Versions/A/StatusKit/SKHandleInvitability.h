@interface SKHandleInvitability : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isInvitable;
@property (readonly, nonatomic) char wasRemoved;

+ (id)logger;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsInvitable:(char)a0 wasRemoved:(char)a1;

@end
