@class NSString, _TtC9SEService11MemoryUsage;

@interface SEService.MemoryUsage : NSObject <NSSecureCoding>

@property (class, nonatomic, readonly) _TtC9SEService11MemoryUsage *empty;
@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic) long long pHeap;
@property (nonatomic) long long cor;
@property (nonatomic) long long cod;
@property (nonatomic) long long usedIndices;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithPHeap:(long long)a0 cor:(long long)a1 cod:(long long)a2 usedIndices:(long long)a3;

@end
