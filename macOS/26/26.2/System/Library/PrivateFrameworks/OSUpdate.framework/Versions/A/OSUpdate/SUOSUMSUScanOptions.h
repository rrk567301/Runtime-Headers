@class NSString;

@interface SUOSUMSUScanOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL background;
@property BOOL mdmInitiated;
@property BOOL buddyInitiated;
@property (retain) NSString *requestedProductMarketingVersion;
@property BOOL splatOnly;

+ (id)optionsWithBackground:(BOOL)a0 mdmInitiated:(BOOL)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
