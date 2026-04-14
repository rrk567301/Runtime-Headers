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
- (BOOL)containsLocation:(id)a0;
- (id)textRangeByIntersectingWithTextRange:(id)a0;
- (id)initWithLocation:(id)a0 endLocation:(id)a1;
- (BOOL)isEmpty;
- (BOOL)isNotEmpty;
- (BOOL)isEqualToTextRange:(id)a0;
- (id)textRangeByFormingUnionWithTextRange:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)hash;
- (BOOL)intersectsWithTextRange:(id)a0;

@end
