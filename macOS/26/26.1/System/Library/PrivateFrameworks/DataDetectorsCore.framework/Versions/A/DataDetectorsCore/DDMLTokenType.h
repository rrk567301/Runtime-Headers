@interface DDMLTokenType : NSObject

@property (readonly) int classification;
@property (readonly) BOOL beginning;

- (id)description;
- (id)debugDescription;
- (id)initWithClassification:(int)a0 beginning:(BOOL)a1;

@end
