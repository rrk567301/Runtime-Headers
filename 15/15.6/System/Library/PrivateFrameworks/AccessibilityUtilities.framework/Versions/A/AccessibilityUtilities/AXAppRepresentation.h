@class NSString;

@interface AXAppRepresentation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int pid;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) long long layoutRole;
@property (readonly, nonatomic) char isLayoutPrimary;
@property (readonly, nonatomic) char isLayoutFullscreenModal;

+ (id)appWithPID:(int)a0 bundleID:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;

@end
