@protocol NSTextLocation;

@interface NSTextRange : NSObject

@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly) id<NSTextLocation> location;
@property (readonly) id<NSTextLocation> endLocation;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithLocation:(id)a0;
- (id)initWithLocation:(id)a0 endLocation:(id)a1;
- (BOOL)intersectsWithTextRange:(id)a0;
- (id)textRangeByIntersectingWithTextRange:(id)a0;
- (BOOL)containsLocation:(id)a0;
- (BOOL)containsRange:(id)a0;
- (id)terminator;
- (id)textRangeByFormingUnionWithTextRange:(id)a0;
- (BOOL)isEqualToTextRange:(id)a0;

@end
