@class NSString, NSPersonNameComponents;

@interface TUCollaborationInitiator : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, copy, nonatomic) NSString *handle;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNameComponents:(id)a0 handle:(id)a1;

@end
