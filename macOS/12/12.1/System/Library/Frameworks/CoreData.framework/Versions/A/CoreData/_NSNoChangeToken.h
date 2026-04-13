@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
