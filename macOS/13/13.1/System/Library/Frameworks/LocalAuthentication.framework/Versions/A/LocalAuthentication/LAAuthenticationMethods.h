@class NSUUID, NSArray, NSSet, LAAuthentication;

@interface LAAuthenticationMethods : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (weak, nonatomic) LAAuthentication *authentication;
@property (retain, nonatomic) NSArray *availableMethods;
@property (retain, nonatomic) NSSet *activeMethods;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)changeActiveMethods:(id)a0;

@end
