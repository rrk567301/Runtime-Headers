@class NSNumber, NSString;

@interface _NSJSONRoundTrippingNumber : NSObject <NSSecureCoding> {
    NSNumber *_number;
    NSString *_representation;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)isSubclassOfClass:(Class)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (Class)superclass;
- (BOOL)isNSNumber__;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToNumber:(id)a0;
- (id)stringValue;
- (BOOL)_allowsDirectEncoding;
- (id)initWithNumber:(id)a0 representation:(id)a1;

@end
