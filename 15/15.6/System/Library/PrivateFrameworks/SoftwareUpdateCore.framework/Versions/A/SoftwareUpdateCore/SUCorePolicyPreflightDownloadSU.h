@class NSDictionary;

@interface SUCorePolicyPreflightDownloadSU : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property long long specifiedFields;
@property (nonatomic) char allowsCellular;
@property (nonatomic) char discretionary;
@property (nonatomic) char disableUI;
@property (nonatomic) char skipPhase;
@property (retain, nonatomic) NSDictionary *basePreflightOptions;
@property (retain, nonatomic) NSDictionary *additionalOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (void)backToDefaultsWithSkipPhaseSet:(char)a0;
- (id)initWithSkipPhaseSet:(char)a0;

@end
