@class NSNumber, NSString;

@interface _NSJSONRoundTrippingNumber : NSObject <NSSecureCoding> {
    NSNumber *_number;
    NSString *_representation;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (char)instancesRespondToSelector:(SEL)a0;
+ (char)isSubclassOfClass:(Class)a0;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (Class)superclass;
- (char)isNSNumber__;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToNumber:(id)a0;
- (id)stringValue;
- (char)_allowsDirectEncoding;
- (id)initWithNumber:(id)a0 representation:(id)a1;

@end
