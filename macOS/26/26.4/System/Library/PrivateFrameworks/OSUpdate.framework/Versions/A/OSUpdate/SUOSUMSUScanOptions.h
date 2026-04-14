@class NSString;

@interface SUOSUMSUScanOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL background;
@property BOOL mdmInitiated;
@property BOOL disablePSUS;
@property (retain) NSString *requestedProductMarketingVersion;
@property BOOL splatOnly;

+ (id)optionsWithBackground:(BOOL)a0 mdmInitiated:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
