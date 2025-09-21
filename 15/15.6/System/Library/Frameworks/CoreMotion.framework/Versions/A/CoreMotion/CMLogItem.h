@interface CMLogItem : NSObject <NSSecureCoding, NSCopying> {
    id _internalLogItem;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(double)a0;

@end
