@class NSString, NSDictionary;

@interface IASPPhase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) float percentage;
@property (readonly) long long delay;
@property (readonly) NSDictionary *info;

+ (id)phaseWithName:(id)a0 percentage:(float)a1 delay:(long long)a2;
+ (id)phaseWithInfo:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 percentage:(float)a1 delay:(long long)a2;

@end
