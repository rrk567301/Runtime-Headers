@class NSDictionary, NSString;

@interface __NSVariableWidthString : NSString {
    NSDictionary *_variants;
    NSString *_defaultString;
}

@property (readonly) unsigned long long length;

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formatConfiguration;
- (id)initWithWidthContexts:(id)a0;
- (id)_widthVariants;
- (id)initWithString:(id)a0 widthVariants:(id)a1;
- (id)initWithWidthVariants:(id)a0;
- (id)variantFittingPresentationWidth:(long long)a0;

@end
