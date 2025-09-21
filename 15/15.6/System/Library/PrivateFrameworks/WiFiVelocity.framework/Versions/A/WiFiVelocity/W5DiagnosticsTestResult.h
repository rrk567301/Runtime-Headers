@class NSUUID, NSDictionary, NSError;

@interface W5DiagnosticsTestResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSUUID *uuid;
@property (nonatomic) long long testID;
@property (nonatomic) char result;
@property (nonatomic) char didPass;
@property (copy, nonatomic) NSDictionary *configuration;
@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) double testStarted;
@property (nonatomic) double testCompleted;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToDiagnosticsTestResult:(id)a0;

@end
