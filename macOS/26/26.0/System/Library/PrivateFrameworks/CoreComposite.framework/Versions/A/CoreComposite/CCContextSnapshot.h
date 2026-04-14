@class CCContextDescriptor, NSMutableDictionary, NSDictionary, NSArray, CCAccelerateDeviceGroup, CCContext;

@interface CCContextSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CCContextDescriptor *contextDescriptor;
@property (retain, nonatomic) NSDictionary *laneData;
@property (retain, nonatomic) NSDictionary *laneState;
@property (retain, nonatomic) NSMutableDictionary *laneDescriptorDictionary;
@property (retain, nonatomic) NSArray *runPasses;
@property (retain, nonatomic) CCContext *context;
@property (retain, nonatomic) CCAccelerateDeviceGroup *deviceGroup;

+ (id)contextSnapshotForContext:(id)a0 deviceGroup:(id)a1;
+ (id)createContextFromLiteSnapshotData:(id)a0 device:(id)a1;
+ (id)createContextFromLiteSnapshotData:(id)a0 device:(id)a1 overrideProtectionOptions:(unsigned long long)a2;
+ (id)createContextFromSnapshotData:(id)a0 device:(id)a1 deviceGroup:(id)a2;
+ (id)createContextFromSnapshotData:(id)a0 device:(id)a1 deviceGroup:(id)a2 descriptorMutator:(id /* block */)a3;
+ (id)createContextFromSnapshotData:(id)a0 device:(id)a1 deviceGroup:(id)a2 descriptorMutator:(id /* block */)a3 error:(id *)a4;
+ (id)deprecatedDataObjects;
+ (id)deprecatedDescriptorsObjects;
+ (id)deprecatedServiceDescriptorsObjects;
+ (id)liteSnapshotContext:(id)a0;
+ (id)snapshotContext:(id)a0 deviceGroup:(id)a1;

- (void)setDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)constructContextWithDeviceGroup:(id)a0;

@end
