@interface CCFullSetDonation : CCSetDonation

@property (readonly, nonatomic) long long errorCode;

- (long long)errorCode;
- (BOOL)registerItem:(id)a0 error:(id *)a1;

@end
