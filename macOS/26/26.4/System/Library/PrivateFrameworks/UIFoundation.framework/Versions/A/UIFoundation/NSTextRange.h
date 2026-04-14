@protocol NSTextLocation;

@interface NSTextRange : NSObject

@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly) id<NSTextLocation> location;
@property (readonly) id<NSTextLocation> endLocation;

+ (id)combineTextRanges:(id)a0 withTextRanges:(id)a1 usingOperator:(int)a2;

- (id)textRangeWithAdjustment:(unsigned long long)a0 rangeProvider:(id /* block */)a1;
- (id)debugDescription;
- (BOOL)containsLocation:(id)a0;
- (id)initWithLocation:(id)a0;
- (id)textRangeByIntersectingWithTextRange:(id)a0;
- (id)initWithLocation:(id)a0 endLocation:(id)a1;
- (BOOL)isNotEmpty;
- (BOOL)containsRange:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTextRange:(id)a0;
- (id)textRangeByFormingUnionWithTextRange:(id)a0;
- (BOOL)intersectsWithTextRange:(id)a0;
- (id)description;
- (void)dealloc;
- (id)terminator;

@end
