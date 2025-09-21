@protocol NSTextLocation;

@interface NSTextRange : NSObject

@property (readonly, getter=isEmpty) char empty;
@property (readonly) id<NSTextLocation> location;
@property (readonly) id<NSTextLocation> endLocation;

+ (id)combineTextRanges:(id)a0 withTextRanges:(id)a1 usingOperator:(int)a2;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (char)isEqual:(id)a0;
- (char)containsLocation:(id)a0;
- (char)containsRange:(id)a0;
- (id)initWithLocation:(id)a0;
- (id)initWithLocation:(id)a0 endLocation:(id)a1;
- (char)intersectsWithTextRange:(id)a0;
- (char)isEqualToTextRange:(id)a0;
- (char)isNotEmpty;
- (id)terminator;
- (id)textRangeByIntersectingWithTextRange:(id)a0;
- (id)textRangeByFormingUnionWithTextRange:(id)a0;
- (id)textRangeWithAdjustment:(unsigned long long)a0 rangeProvider:(id /* block */)a1;

@end
