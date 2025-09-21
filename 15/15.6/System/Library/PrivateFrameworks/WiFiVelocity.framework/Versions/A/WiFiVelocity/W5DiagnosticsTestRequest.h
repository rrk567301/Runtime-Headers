@class NSUUID, NSDictionary;

@interface W5DiagnosticsTestRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSUUID *uuid;
@property (nonatomic) long long testID;
@property (copy, nonatomic) NSDictionary *configuration;

+ (id)requestWithTestID:(long long)a0 configuration:(id)a1;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToDiagnosticsTestRequest:(id)a0;

@end
