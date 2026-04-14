@class NSUUID, AAIdentityAvatar;

@interface AAIdentity : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) AAIdentityAvatar *avatar;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
