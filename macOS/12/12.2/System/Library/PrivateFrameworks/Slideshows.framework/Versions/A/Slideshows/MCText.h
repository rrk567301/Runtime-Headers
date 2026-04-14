@class MCContainerEffect, NSAttributedString, NSArray;

@interface MCText : MCObject

@property MCContainerEffect *container;
@property (nonatomic) unsigned long long index;
@property (copy) NSAttributedString *attributedString;
@property (retain) NSArray *stringAttributes;

- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (id)attributedStringWithCTAttributes;
- (id)attributedStringWithNSAttributes;

@end
