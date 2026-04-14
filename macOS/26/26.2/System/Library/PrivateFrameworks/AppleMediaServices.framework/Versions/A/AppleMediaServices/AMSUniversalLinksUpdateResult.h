@interface AMSUniversalLinksUpdateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL success;

+ (id)archiveClasses;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
