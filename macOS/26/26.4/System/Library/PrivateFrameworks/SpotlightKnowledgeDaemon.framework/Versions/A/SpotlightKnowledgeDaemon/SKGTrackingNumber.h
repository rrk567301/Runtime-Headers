@class NSString;

@interface SKGTrackingNumber : SKGEntity

@property (copy, nonatomic) NSString *trackingNumber;
@property (copy, nonatomic) NSString *carrier;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
