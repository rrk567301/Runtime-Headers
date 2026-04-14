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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned char)length;
- (void)setLength:(unsigned char)a0;
- (unsigned char)type;
- (void)setType:(unsigned char)a0;
- (void)setWidth:(unsigned char)a0;
- (unsigned char)width;
- (id)initWithDefaults;
- (BOOL)isAnythingOverridden;
- (BOOL)isTypeOverridden;
- (BOOL)isWidthOverridden;
- (BOOL)isLengthOverridden;
- (id)initWithType:(unsigned char)a0 width:(unsigned char)a1 length:(unsigned char)a2;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
