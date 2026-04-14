@class NSString;

@interface CTXPCSimCommonResultResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *result;

- (id)ct_shortName;
- (id)initWithResult:(id)a0;

@end
