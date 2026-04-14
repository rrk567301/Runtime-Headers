@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (id)autorelease;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
