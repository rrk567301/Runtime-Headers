@interface CTXPCGetMaxDataRateResponse : CTXPCResponseMessage

@property (readonly, nonatomic) long long rate;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithDataRate:(long long)a0;

@end
