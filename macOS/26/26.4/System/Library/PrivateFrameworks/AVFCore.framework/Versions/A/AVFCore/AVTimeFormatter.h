@class AVTimeFormatterInternal;

@interface AVTimeFormatter : NSFormatter {
    AVTimeFormatterInternal *_internal;
}

@property (nonatomic) long long style;
@property (nonatomic) double formatTemplate;
@property (nonatomic, getter=isFullWidth) BOOL fullWidth;

- (id)stringForObjectValue:(id)a0;
- (void)setCachedDateFormatterFormat:(id)a0;
- (void)setLocale:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIsRightToLeft:(BOOL)a0;
- (id)stringFromSeconds:(double)a0;
- (id)numberFormatterWithOneMinimumIntegerDigits;
- (void)encodeWithCoder:(id)a0;
- (id)stringFromCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)cachedDateFormatterFormat;
- (id)cachedDateFormatterTemplate;
- (id)stringFromTimeInterval:(double)a0;
- (id)locale;
- (void)setCachedDateFormatterTemplate:(id)a0;
- (id)init;
- (void)setNumberFormatterWithTwoMinimumIntegerDigits:(id)a0;
- (void)setNumberFormatterWithOneMinimumIntegerDigits:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)numberFormatterWithTwoMinimumIntegerDigits;
- (id)initWithCoder:(id)a0;
- (BOOL)isRightToLeft;
- (void)dealloc;

@end
