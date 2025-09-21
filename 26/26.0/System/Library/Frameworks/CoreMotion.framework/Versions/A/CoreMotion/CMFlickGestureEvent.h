@interface CMFlickGestureEvent : CMLogItem {
    long long fEventType;
}

@property (readonly, nonatomic) long long eventType;

+ (BOOL)supportsSecureCoding;
+ (id)stringForEventType:(long long)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithEventType:(long long)a0 timestamp:(double)a1;

@end
