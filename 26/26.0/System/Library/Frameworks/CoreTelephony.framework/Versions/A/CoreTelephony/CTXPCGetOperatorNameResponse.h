@class NSString;

@interface CTXPCGetOperatorNameResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *operatorName;

- (id)ct_shortName;
- (id)initWithOperatorName:(id)a0;

@end
