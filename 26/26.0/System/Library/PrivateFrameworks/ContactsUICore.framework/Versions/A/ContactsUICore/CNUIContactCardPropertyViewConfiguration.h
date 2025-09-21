@class NSArray;

@interface CNUIContactCardPropertyViewConfiguration : NSObject

@property (nonatomic) BOOL isMailVIP;
@property (copy, nonatomic) NSArray *highlightedLabeledValueIdentifiers;
@property (nonatomic) BOOL shouldColorEmphasizeHighlightedProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
