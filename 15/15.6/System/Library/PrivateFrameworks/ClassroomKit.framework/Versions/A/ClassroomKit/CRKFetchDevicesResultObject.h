@class NSArray;

@interface CRKFetchDevicesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *connectedDevices;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
