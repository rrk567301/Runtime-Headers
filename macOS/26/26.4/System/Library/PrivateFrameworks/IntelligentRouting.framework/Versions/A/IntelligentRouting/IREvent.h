@class NSString;

@interface IREvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;

+ (id)new;

- (id)contextIdentifier;
- (long long)eventType;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (long long)eventSubType;
- (BOOL)isEligibleApp;
- (BOOL)isOutsideApp;

@end
