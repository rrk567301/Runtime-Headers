@interface RMLogItem : NSObject <NSSecureCoding, NSCopying> {
    id _internalLogItem;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithTimestamp:(double)a0;

@end
