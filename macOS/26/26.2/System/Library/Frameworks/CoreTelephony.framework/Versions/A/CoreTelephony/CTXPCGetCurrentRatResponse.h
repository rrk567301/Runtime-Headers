@class NSString;

@interface CTXPCGetCurrentRatResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *rat;

- (id)ct_shortName;
- (id)initWithRat:(id)a0;

@end
