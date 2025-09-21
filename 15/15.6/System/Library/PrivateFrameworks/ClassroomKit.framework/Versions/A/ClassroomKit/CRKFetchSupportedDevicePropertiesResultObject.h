@class NSArray;

@interface CRKFetchSupportedDevicePropertiesResultObject : CATTaskResultObject

@property (retain, nonatomic) NSArray *staticProperties;
@property (retain, nonatomic) NSArray *liveProperties;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
