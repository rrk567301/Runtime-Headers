@class NSString;

@interface HMMMLogOrigin : NSObject

@property (readonly, nonatomic) NSString *logId;

+ (id)logCategory;
+ (id)originWithLogIdentifier:(id)a0;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithLogIdentifier:(id)a0;

@end
