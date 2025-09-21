@class NSUUID, NSString;

@interface MTRDeviceControllerMachServiceXPCParameters : MTRDeviceControllerAbstractParameters

@property (retain) NSUUID *uniqueIdentifier;
@property (retain) NSString *machServiceName;
@property unsigned long long connectionOptions;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0;

@end
