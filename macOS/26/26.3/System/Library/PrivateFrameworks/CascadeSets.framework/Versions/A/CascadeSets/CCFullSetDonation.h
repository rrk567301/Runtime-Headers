@interface CCFullSetDonation : CCSetDonation

@property (readonly, nonatomic) long long errorCode;

- (BOOL)registerItem:(id)a0 error:(id *)a1;
- (long long)errorCode;

@end
