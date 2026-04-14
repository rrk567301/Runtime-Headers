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
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
