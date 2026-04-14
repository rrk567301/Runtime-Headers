@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)autorelease;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)encodeWithCoder:(id)a0;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (id)description;
- (id)initWithCoder:(id)a0;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
