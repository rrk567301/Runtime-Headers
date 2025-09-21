@interface _EXExtensionAvailablility : NSObject <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long enabledCount;
@property (nonatomic) long long disabledCount;
@property (nonatomic) long long unelectedCount;

+ (void)removeChangeObserver:(id)a0;
+ (id)addChangeObserver:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
