@class NSString;

@interface ARClipOnIntrinsics : NSObject <ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *intrinsicsData;
@property (readonly, nonatomic) NSString *rxUUID;

+ (id)resourceKey;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIntrinsicsData:(id)a0 rxUUID:(id)a1;

@end
