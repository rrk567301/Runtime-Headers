@class NSUUID;

@interface HKProfileIdentifier : NSObject <NSSecureCoding, NSCopying> {
    NSUUID *_identifier;
    long long _type;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long type;

+ (id)_profileWithUUID:(id)a0 type:(long long)a1;
+ (char)isValidProfileType:(long long)a0;
+ (char)isValidSecondaryProfileType:(long long)a0;
+ (id)primaryProfile;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end
