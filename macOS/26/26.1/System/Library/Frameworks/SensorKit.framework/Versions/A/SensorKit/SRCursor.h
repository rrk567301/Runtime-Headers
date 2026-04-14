@class NSData;

@interface SRCursor : NSObject <NSCopying, NSSecureCoding> {
    NSData *_payload;
    NSData *_hmac;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)new;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_payloadOfClass:(Class)a0 error:(id *)a1;

@end
