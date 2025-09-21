@class NSString;

@interface BKSTerminationContext : NSObject <NSCopying>

@property (nonatomic) long long exceptionCode;
@property (copy, nonatomic) NSString *explanation;

+ (id)context;
+ (id)terminationAssertionContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_isEqualToTerminationContext:(id)a0;

@end
