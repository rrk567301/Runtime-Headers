@interface CUINamedRenditionInfo : NSObject <NSCopying> {
    void *_bitmap;
    const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *_keyFormat;
    long long _platform;
}

+ (int)subtypeToIndexWithPlatform:(long long)a0 andInput:(unsigned short)a1;
+ (int)subtypeFromIndexWithPlatform:(long long)a0 andIndex:(unsigned short)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)attributePresent:(int)a0 withValue:(unsigned short)a1;
- (id)initWithData:(id)a0 keyFormat:(const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)a1 andPlatform:(long long)a2;
- (id)initWithKeyFormat:(const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)a0 andPlatform:(long long)a1;
- (id)archivedData;
- (BOOL)isEqualToNamedRenditionInfo:(id)a0;
- (id)bitwiseAndWith:(id)a0;
- (id)bitwiseOrWith:(id)a0 forAttribute:(int)a1;
- (unsigned short)getValueOfAttribute:(int)a0;
- (unsigned short)getClosestValueOfAttribute:(int)a0 withValue:(unsigned short)a1;
- (BOOL)contentPresentForAttribute:(int)a0;
- (BOOL)contentEqualForAttribute:(int)a0 withRenditionInfo:(id)a1;
- (BOOL)diverseContentPresentForAttribute:(int)a0;
- (void)setAttributePresent:(int)a0 withValue:(unsigned short)a1;
- (void)clearAttributePresent:(int)a0 withValue:(unsigned short)a1;
- (unsigned long long)numberOfBitsSet;
- (void)decrementValue:(long long *)a0 forAttribute:(int)a1;
- (void)incrementIndex:(unsigned long long *)a0 inValues:(id)a1 forAttribute:(int)a2;

@end
