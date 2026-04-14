@class NSString, NSCountableTextLocation;

@interface NSCountableTextRange : NSTextRange

@property (class, readonly) NSCountableTextRange *documentRange;

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) NSCountableTextLocation *location;
@property (readonly) NSCountableTextLocation *endLocation;
@property (readonly, copy) NSString *type;
@property (readonly, getter=isEndingAtEOD) BOOL endingAtEOD;

+ (void)initialize;
+ (BOOL)isBaseClassTestingMode;
+ (void)setBaseClassTestingMode:(BOOL)a0;

- (id)debugDescription;
- (id)textRangeByFormingUnionWithTextRange:(id)a0;
- (BOOL)isEmpty;
- (BOOL)intersectsWithTextRange:(id)a0;
- (id)textRangeByIntersectingWithTextRange:(id)a0;
- (BOOL)isEqualToTextRange:(id)a0;
- (BOOL)isNotEmpty;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containsLocation:(id)a0;
- (unsigned long long)hash;
- (id)initWithLocation:(id)a0 endLocation:(id)a1;

@end
