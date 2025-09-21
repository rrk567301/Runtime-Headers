@class NSDictionary;

@interface SUCorePolicyPreflightFDRRecovery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char performPhase;
@property (retain, nonatomic) NSDictionary *basePreflightOptions;
@property (retain, nonatomic) NSDictionary *additionalOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;

@end
