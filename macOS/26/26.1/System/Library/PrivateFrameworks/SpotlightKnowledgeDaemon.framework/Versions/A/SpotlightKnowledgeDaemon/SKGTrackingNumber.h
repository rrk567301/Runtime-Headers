@class NSString;

@interface SKGTrackingNumber : SKGEntity

@property (copy, nonatomic) NSString *trackingNumber;
@property (copy, nonatomic) NSString *carrier;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
