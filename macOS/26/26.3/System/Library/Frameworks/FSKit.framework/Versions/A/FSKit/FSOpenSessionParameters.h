@class NSDictionary;

@interface FSOpenSessionParameters : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long openFlags;
@property long long uiOption;
@property (copy) NSDictionary *authenticationInfo;

- (Class)classForCoder;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
