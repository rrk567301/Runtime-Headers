@class NSData;

@interface SRCursor : NSObject <NSCopying, NSSecureCoding> {
    NSData *_payload;
    NSData *_hmac;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)new;
+ (void)initialize;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_payloadOfClass:(Class)a0 error:(id *)a1;

@end
