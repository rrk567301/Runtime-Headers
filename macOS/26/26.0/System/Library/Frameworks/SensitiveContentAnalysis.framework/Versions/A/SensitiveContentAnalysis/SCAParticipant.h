@class NSString, NSSet;

@interface SCAParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *firstName;
@property (readonly, copy) NSString *lastName;
@property (readonly, copy) NSSet *handles;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 handles:(id)a1;
- (id)initWithDisplayName:(id)a0 firstName:(id)a1 lastName:(id)a2 handles:(id)a3;

@end
