@class NSDictionary;

@interface SUCorePolicyDocumentationScan : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property long long specifiedFields;
@property (nonatomic) char allowsCellular;
@property (nonatomic) char discretionary;
@property (nonatomic) char disableUI;
@property (nonatomic) char requiresPowerPluggedIn;
@property (nonatomic) int downloadTimeoutSecs;
@property (nonatomic) char liveServerCatalogOnly;
@property (retain, nonatomic) NSDictionary *additionalServerParams;
@property (retain, nonatomic) NSDictionary *additionalOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (void)backToDefaults;

@end
