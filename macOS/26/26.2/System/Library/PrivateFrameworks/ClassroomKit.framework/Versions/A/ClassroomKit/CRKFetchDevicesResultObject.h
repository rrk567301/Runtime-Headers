@class NSArray;

@interface CRKFetchDevicesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *connectedDevices;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
