@class NSUUID, NSString, NSDate;

@interface IAXPCObject : NSObject <IASessionMetadataProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *textInputSessionId;
@property (retain, nonatomic) NSUUID *appSessionId;
@property (retain, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDate *creationTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithTimestamp:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
