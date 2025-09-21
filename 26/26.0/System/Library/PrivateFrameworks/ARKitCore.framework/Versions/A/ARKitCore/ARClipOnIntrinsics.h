@class NSString;

@interface ARClipOnIntrinsics : NSObject <ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *intrinsicsData;
@property (readonly, nonatomic) NSString *rxUUID;

+ (id)resourceKey;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIntrinsicsData:(id)a0 rxUUID:(id)a1;

@end
