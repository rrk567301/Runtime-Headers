@class NSError;

@interface GKScanResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowed;
@property (retain, nonatomic) NSError *gkError;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
