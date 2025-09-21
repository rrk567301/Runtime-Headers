@class NSString, NSPersonNameComponents;

@interface TUCollaborationInitiator : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, copy, nonatomic) NSString *handle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithNameComponents:(id)a0 handle:(id)a1;

@end
