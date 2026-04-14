@class NSString, NSArray;

@interface CTCellularPlanProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *associatedIccid;
@property (nonatomic) long long simCapability;
@property (retain, nonatomic) NSArray *supportedRegionCodes;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
