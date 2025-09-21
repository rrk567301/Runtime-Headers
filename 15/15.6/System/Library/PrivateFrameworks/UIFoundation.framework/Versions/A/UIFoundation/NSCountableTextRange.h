@class NSString, NSCountableTextLocation;

@interface NSCountableTextRange : NSTextRange

@property (class, readonly) NSCountableTextRange *documentRange;

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) NSCountableTextLocation *location;
@property (readonly) NSCountableTextLocation *endLocation;
@property (readonly, copy) NSString *type;
@property (readonly, getter=isEndingAtEOD) char endingAtEOD;

+ (char)isBaseClassTestingMode;
+ (void)setBaseClassTestingMode:(char)a0;

- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEmpty;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)containsLocation:(id)a0;
- (id)initWithLocation:(id)a0 endLocation:(id)a1;
- (char)intersectsWithTextRange:(id)a0;
- (char)isEqualToTextRange:(id)a0;
- (char)isNotEmpty;
- (id)textRangeByIntersectingWithTextRange:(id)a0;
- (id)textRangeByFormingUnionWithTextRange:(id)a0;

@end
