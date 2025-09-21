@class NSString;

@interface SKGTrackingNumber : SKGEntity

@property (copy, nonatomic) NSString *trackingNumber;
@property (copy, nonatomic) NSString *carrier;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
