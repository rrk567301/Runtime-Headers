@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (unsigned long long)retainCount;
- (id)autorelease;
- (id)retain;
- (id)description;
- (id)init;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (oneway void)release;

@end
