@class NSString, NSData;

@interface DIAttributeImage : DIAttribute <NSSecureCoding> {
    NSString *_encoding;
    unsigned long long _format;
    unsigned long long _height;
    unsigned long long _width;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *encoding;
@property (copy, nonatomic, getter=getCurrentValue) NSData *currentValue;
@property (nonatomic) unsigned long long format;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long width;

- (id)initWithCoder:(id)a0;
- (void)setHeight:(unsigned long long)a0;
- (id)defaultValue;
- (void)encodeWithCoder:(id)a0;
- (void)setWidth:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
