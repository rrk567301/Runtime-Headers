@interface BPSCountWindowState : BPSWindowState

@property (nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long currentCount;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)metadata;
- (id)initWithCapacity:(unsigned long long)a0 currentCount:(unsigned long long)a1 identifier:(id)a2 aggregate:(id)a3 completed:(char)a4;

@end
