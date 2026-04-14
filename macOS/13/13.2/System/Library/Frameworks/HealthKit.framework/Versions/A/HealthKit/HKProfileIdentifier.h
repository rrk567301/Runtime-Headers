@class NSUUID;

@interface HKProfileIdentifier : NSObject <NSSecureCoding, NSCopying> {
    NSUUID *_identifier;
    long long _type;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long type;

+ (BOOL)isValidProfileType:(long long)a0;
+ (BOOL)isValidSecondaryProfileType:(long long)a0;
+ (id)primaryProfile;
+ (id)_profileWithUUID:(id)a0 type:(long long)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
