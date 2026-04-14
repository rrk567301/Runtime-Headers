@class NSString;

@interface NSURLQueryItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) NSString *value;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)queryItemWithName:(id)a0 value:(id)a1;
+ (id)_queryItem;
+ (id)_queryItemWithName:(id)a0 value:(id)a1;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 value:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
