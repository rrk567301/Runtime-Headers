@class NSNumber, NSString;

@interface _NSJSONRoundTrippingNumber : NSObject <NSSecureCoding> {
    NSNumber *_number;
    NSString *_representation;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;

- (BOOL)_allowsDirectEncoding;
- (void)dealloc;
- (BOOL)isKindOfClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (id)stringValue;
- (void)forwardInvocation:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)superclass;
- (BOOL)isNSNumber__;
- (BOOL)isEqualToNumber:(id)a0;
- (id)initWithNumber:(id)a0 representation:(id)a1;

@end
