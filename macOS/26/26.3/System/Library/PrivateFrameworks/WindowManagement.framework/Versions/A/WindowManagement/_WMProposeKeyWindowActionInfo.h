@class NSString;

@interface _WMProposeKeyWindowActionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *fromWindowIdentifier;
@property (readonly, copy, nonatomic) NSString *toWindowIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFromWindowIdentifier:(id)a0 toWindowIdentifier:(id)a1;

@end
