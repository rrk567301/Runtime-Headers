@class NSString;

@interface GEOComposedStringFormatStyle : NSObject <NSCopying, NSSecureCoding> {
    int _type;
    NSString *_token;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
