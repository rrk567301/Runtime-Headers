@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (char)_isDeallocating;
- (oneway void)release;
- (char)_tryRetain;
- (id)autorelease;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
