@class NSString;

@interface CNCDDatabaseCompatibilityAnalysis : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL needsMovedAside;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *reason;

+ (id)analysisWithReason:(id)a0 message:(id)a1;
+ (id)analyzeError:(id)a0;
+ (id)doesNotNeedMovedAside;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithNeedsMovedAside:(BOOL)a0 message:(id)a1 reason:(id)a2;

@end
