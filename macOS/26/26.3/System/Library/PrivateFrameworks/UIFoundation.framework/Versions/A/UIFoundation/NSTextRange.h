@protocol NSTextLocation;

@interface NSTextRange : NSObject

@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly) id<NSTextLocation> location;
@property (readonly) id<NSTextLocation> endLocation;

+ (id)combineTextRanges:(id)a0 withTextRanges:(id)a1 usingOperator:(int)a2;

- (id)debugDescription;
- (id)textRangeByFormingUnionWithTextRange:(id)a0;
- (id)initWithLocation:(id)a0;
- (BOOL)intersectsWithTextRange:(id)a0;
- (id)description;
- (id)textRangeByIntersectingWithTextRange:(id)a0;
- (id)terminator;
- (BOOL)isEqualToTextRange:(id)a0;
- (BOOL)containsRange:(id)a0;
- (BOOL)isNotEmpty;
- (id)textRangeWithAdjustment:(unsigned long long)a0 rangeProvider:(id /* block */)a1;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsLocation:(id)a0;
- (id)initWithLocation:(id)a0 endLocation:(id)a1;

@end
