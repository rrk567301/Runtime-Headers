@class NSString;

@interface BKSTerminationContext : NSObject <NSCopying>

@property (nonatomic) long long exceptionCode;
@property (copy, nonatomic) NSString *explanation;

+ (id)context;
+ (id)terminationAssertionContext;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqualToTerminationContext:(id)a0;

@end
