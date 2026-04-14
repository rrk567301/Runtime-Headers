@class WFContentProperty, NSSet;

@interface WFContentSortDescriptor : NSObject <WFContentPropertyContainer>

@property (readonly, nonatomic) WFContentProperty *property;
@property (readonly, copy, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) NSSet *containedProperties;

+ (id)randomSortDescriptor;
+ (id)sortDescriptorWithProperty:(id)a0 ascending:(BOOL)a1 comparator:(id /* block */)a2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithProperty:(id)a0 ascending:(BOOL)a1 comparator:(id /* block */)a2;

@end
