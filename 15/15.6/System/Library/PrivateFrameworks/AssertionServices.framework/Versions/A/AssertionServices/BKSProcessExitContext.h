@interface BKSProcessExitContext : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _exitReason;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long exitReason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
