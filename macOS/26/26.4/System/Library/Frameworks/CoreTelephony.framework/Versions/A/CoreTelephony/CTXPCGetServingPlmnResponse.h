@class NSString;

@interface CTXPCGetServingPlmnResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *plmn;

- (id)ct_shortName;
- (id)initWithPlmn:(id)a0;

@end
