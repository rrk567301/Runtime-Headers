@class NSSet;

@interface HDWorkoutDefaultSessionRecoveryConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *generatedTypes;
@property (readonly, nonatomic) long long moveMode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithGeneratedTypes:(id)a0 moveMode:(long long)a1;

@end
