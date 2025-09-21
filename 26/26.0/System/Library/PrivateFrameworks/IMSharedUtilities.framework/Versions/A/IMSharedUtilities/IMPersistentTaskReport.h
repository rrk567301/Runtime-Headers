@interface IMPersistentTaskReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long flag;
@property (readonly, nonatomic) unsigned long long lane;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) BOOL isEmpty;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_groupName;
- (void)incrementCount:(long long)a0;
- (id)_flagName;
- (id)_laneName;
- (id)_reasonName;
- (id)initWithTaskFlag:(unsigned long long)a0 lane:(unsigned long long)a1 reason:(long long)a2;
- (BOOL)isEqualToTaskReport:(id)a0;

@end
