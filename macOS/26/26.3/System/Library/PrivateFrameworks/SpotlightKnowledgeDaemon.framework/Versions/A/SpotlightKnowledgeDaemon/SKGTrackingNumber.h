@class NSString;

@interface SKGTrackingNumber : SKGEntity

@property (copy, nonatomic) NSString *trackingNumber;
@property (copy, nonatomic) NSString *carrier;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
