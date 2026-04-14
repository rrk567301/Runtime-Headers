@class MANAutoAssetSetInfoFound, MANAutoAssetSetInfoDesire, MANAutoAssetSetStatus, MANAutoAssetSetInfoInstance, MADAutoSetDescriptor, NSString;

@interface MADAutoSetJobInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MANAutoAssetSetInfoInstance *clientInstance;
@property (retain, nonatomic) MANAutoAssetSetInfoDesire *clientDesire;
@property (retain, nonatomic) MANAutoAssetSetInfoFound *foundContent;
@property (retain, nonatomic) MADAutoSetDescriptor *setDescriptor;
@property (retain, nonatomic) MANAutoAssetSetStatus *currentSetStatus;
@property (retain, nonatomic) NSString *assignedAutoAssetUUID;

- (id)copy;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;

@end
