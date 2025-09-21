@class NSString;

@interface HMDAnalyticsHAPServiceData : HMFObject

@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) char isPrimary;
@property (readonly, nonatomic) char ownerUser;

- (void).cxx_destruct;
- (id)initWithServiceType:(id)a0 isPrimary:(char)a1 ownerUser:(char)a2;

@end
