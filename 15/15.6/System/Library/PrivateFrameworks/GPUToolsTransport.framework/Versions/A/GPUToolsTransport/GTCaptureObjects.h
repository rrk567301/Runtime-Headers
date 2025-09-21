@class NSArray;

@interface GTCaptureObjects : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSArray *commandQueues;
@property (copy, nonatomic) NSArray *captureScopes;
@property (copy, nonatomic) NSArray *metalLayers;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
