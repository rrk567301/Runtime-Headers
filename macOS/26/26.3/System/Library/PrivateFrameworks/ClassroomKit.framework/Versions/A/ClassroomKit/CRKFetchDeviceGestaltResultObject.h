@class CRKDeviceGestalt;

@interface CRKFetchDeviceGestaltResultObject : CATTaskResultObject

@property (retain, nonatomic) CRKDeviceGestalt *deviceGestalt;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
