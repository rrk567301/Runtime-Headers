@class NSString;

@interface CTXPCGetWirelessTechnologyResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *technology;

- (id)ct_shortName;
- (id)initWithTechnology:(id)a0;

@end
