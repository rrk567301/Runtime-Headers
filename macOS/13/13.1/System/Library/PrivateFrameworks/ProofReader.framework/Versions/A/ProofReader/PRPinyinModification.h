@class NSString;

@interface PRPinyinModification : PRModification {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSString *_replacementString;
    unsigned long long _modificationType;
    struct _NSRange { unsigned long long location; unsigned long long length; } _syllableRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _additionalSyllableRange;
    double _modificationScore;
    unsigned long long _syllableCountScore;
    unsigned char _letters[7];
    BOOL _producesPartialSyllable;
    BOOL _isTemporary;
}

+ (id)modificationsForInputString:(id)a0;
+ (id)finalModificationsForInputString:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)modificationType;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })syllableRange;
- (double)modificationScore;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })additionalSyllableRange;
- (id)replacementString;
- (BOOL)isTemporary;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 modificationType:(unsigned long long)a2 syllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 additionalSyllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 modificationScore:(double)a5 syllableCountScore:(unsigned long long)a6 syllableLetters:(const char *)a7 producesPartialSyllable:(BOOL)a8;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 modificationType:(unsigned long long)a2 syllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 modificationScore:(double)a4 syllableCountScore:(unsigned long long)a5 syllableLetters:(const char *)a6 producesPartialSyllable:(BOOL)a7;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })combinedSyllableRange;
- (unsigned long long)syllableCountScore;
- (BOOL)producesPartialSyllable;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 modificationType:(unsigned long long)a2 syllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 additionalSyllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 modificationScore:(double)a5 syllableCountScore:(unsigned long long)a6 syllableLetters:(const char *)a7 producesPartialSyllable:(BOOL)a8 isTemporary:(BOOL)a9;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 modificationType:(unsigned long long)a2 syllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 additionalSyllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 modificationScore:(double)a5;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 modificationType:(unsigned long long)a2 syllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 modificationScore:(double)a4 syllableCountScore:(unsigned long long)a5 syllableLetters:(const char *)a6 producesPartialSyllable:(BOOL)a7 isTemporary:(BOOL)a8;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 modificationType:(unsigned long long)a2 syllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 modificationScore:(double)a4 isTemporary:(BOOL)a5;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 modificationType:(unsigned long long)a2 syllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 modificationScore:(double)a4;
- (BOOL)_shouldAppendLetter:(unsigned char)a0 romanization:(int)a1;

@end
