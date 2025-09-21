@class CTSimLabel;

@interface CTXPCGetSimLabelResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTSimLabel *simLabel;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithLabel:(id)a0;

@end
