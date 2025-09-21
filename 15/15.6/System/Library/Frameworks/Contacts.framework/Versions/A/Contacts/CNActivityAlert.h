@class NSString, NSDictionary;

@interface CNActivityAlert : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *sound;
@property (copy) NSString *vibration;
@property char ignoreMute;
@property (copy) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isValid:(id *)a0;
- (id)initWithSound:(id)a0 vibration:(id)a1 ignoreMute:(char)a2;
- (id)initWithSound:(id)a0 vibration:(id)a1 ignoreMute:(char)a2 userInfo:(id)a3;

@end
