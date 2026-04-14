@class NSString;

@interface CTXPCGetRadioAccessTechnologyResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *rat;

- (id)ct_shortName;
- (id)initWithRAT:(id)a0;

@end
