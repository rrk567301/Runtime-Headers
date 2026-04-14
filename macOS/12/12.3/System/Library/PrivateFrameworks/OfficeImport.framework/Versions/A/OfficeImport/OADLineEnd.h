@interface OADLineEnd : OADProperties <NSCopying> {
    unsigned char mType;
    unsigned char mWidth;
    unsigned char mLength;
    unsigned char mIsTypeOverridden : 1;
    unsigned char mIsWidthOverridden : 1;
    unsigned char mIsLengthOverridden : 1;
}

+ (id)defaultProperties;
+ (id)stringForLineEndType:(unsigned char)a0;
+ (id)stringForLineEndWidth:(unsigned char)a0;
+ (id)stringForLineEndLength:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (unsigned char)length;
- (void)setLength:(unsigned char)a0;
- (unsigned char)type;
- (void)setType:(unsigned char)a0;
- (void)setWidth:(unsigned char)a0;
- (unsigned char)width;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isTypeOverridden;
- (BOOL)isWidthOverridden;
- (BOOL)isLengthOverridden;
- (id)initWithType:(unsigned char)a0 width:(unsigned char)a1 length:(unsigned char)a2;

@end
