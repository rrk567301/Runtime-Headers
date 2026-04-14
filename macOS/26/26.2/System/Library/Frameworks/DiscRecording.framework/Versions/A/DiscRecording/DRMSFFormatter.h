@class NSString;

@interface DRMSFFormatter : NSFormatter {
    NSString *_format;
}

+ (void)initialize;

- (void)setFormat:(id)a0;
- (id)format;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFormat:(id)a0;
- (id)init;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)stringForObjectValue:(id)a0;
- (void)dealloc;

@end
