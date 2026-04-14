@class NSString;

@interface IREvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;

+ (id)new;

- (long long)eventType;
- (id)description;
- (id)init;
- (id)initWithName:(id)a0;
- (id)bundleID;
- (void).cxx_destruct;
- (id)contextIdentifier;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)eventSubType;
- (BOOL)isEligibleApp;
- (BOOL)isOutsideApp;

@end
