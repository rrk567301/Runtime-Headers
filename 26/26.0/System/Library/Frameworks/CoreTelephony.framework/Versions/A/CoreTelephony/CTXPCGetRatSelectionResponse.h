@class CTRatSelection;

@interface CTXPCGetRatSelectionResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTRatSelection *selection;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithRATSelection:(id)a0;

@end
