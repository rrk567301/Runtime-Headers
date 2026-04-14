@class AAIdentityAvatar;

@interface AAIdentity : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ nameComponents;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) AAIdentityAvatar *avatar;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
