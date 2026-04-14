@class NSData, NSString;

@interface FSFileName : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (readonly) NSString *string;
@property (readonly, copy) NSString *debugDescription;

+ (id)nameWithString:(id)a0;
+ (id)nameWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)nameWithCString:(const char *)a0;
+ (id)nameWithData:(id)a0;

- (id)initWithBytes:(const char *)a0 length:(unsigned long long)a1;
- (id)initWithString:(id)a0;
- (id)initWithCString:(const char *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
