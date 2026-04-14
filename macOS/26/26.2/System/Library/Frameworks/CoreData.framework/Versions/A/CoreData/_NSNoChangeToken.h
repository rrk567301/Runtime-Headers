@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)description;
- (oneway void)release;
- (id)init;

@end
