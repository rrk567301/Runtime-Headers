@class CRKDeviceGestalt;

@interface CRKFetchDeviceGestaltResultObject : CATTaskResultObject

@property (retain, nonatomic) CRKDeviceGestalt *deviceGestalt;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
