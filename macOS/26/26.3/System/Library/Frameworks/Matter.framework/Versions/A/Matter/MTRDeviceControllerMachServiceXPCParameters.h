@class NSUUID, NSString;

@interface MTRDeviceControllerMachServiceXPCParameters : MTRDeviceControllerAbstractParameters

@property (retain) NSUUID *uniqueIdentifier;
@property (retain) NSString *machServiceName;
@property unsigned long long connectionOptions;

+ (BOOL)supportsSecureCoding;

- (id)initWithUniqueIdentifier:(id)a0;
- (void).cxx_destruct;

@end
