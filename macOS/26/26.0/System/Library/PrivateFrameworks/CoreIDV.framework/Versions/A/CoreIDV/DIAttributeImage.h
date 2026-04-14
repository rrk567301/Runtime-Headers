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

- (id)defaultValue;
- (void)setWidth:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void)setHeight:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
