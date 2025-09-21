@interface AMSUniversalLinksUpdateResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char success;

+ (id)archiveClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
