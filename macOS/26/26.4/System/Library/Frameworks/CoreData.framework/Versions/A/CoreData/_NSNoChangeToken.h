@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_tryRetain;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (unsigned long long)retainCount;

@end
