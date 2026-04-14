@class NSString, NSArray, CTCellularPlanLifecycleProperties;

@interface CTCellularPlanProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *associatedIccid;
@property (nonatomic) long long simCapability;
@property (retain, nonatomic) NSArray *supportedRegionCodes;
@property (retain, nonatomic) CTCellularPlanLifecycleProperties *lifecycleProperties;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
