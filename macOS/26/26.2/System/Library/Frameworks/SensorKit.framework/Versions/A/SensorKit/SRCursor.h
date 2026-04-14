@class NSData;

@interface SRCursor : NSObject <NSCopying, NSSecureCoding> {
    NSData *_payload;
    NSData *_hmac;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)new;
+ (void)initialize;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)_payloadOfClass:(Class)a0 error:(id *)a1;

@end
