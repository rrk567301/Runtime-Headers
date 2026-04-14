@class NSString;

@interface AXAppRepresentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int pid;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) long long layoutRole;
@property (readonly, nonatomic) BOOL isLayoutPrimary;
@property (readonly, nonatomic) BOOL isLayoutFullscreenModal;

+ (id)appWithPID:(int)a0 bundleID:(id)a1;

- (void)_commonInit;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
