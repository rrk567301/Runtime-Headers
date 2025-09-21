@class NSDictionary;

@interface SUCorePolicyPreflightFDRRecovery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL performPhase;
@property (retain, nonatomic) NSDictionary *basePreflightOptions;
@property (retain, nonatomic) NSDictionary *additionalOptions;

- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
