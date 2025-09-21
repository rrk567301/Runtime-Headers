@class NSString;

@interface SUOSUMSUScanOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL background;
@property BOOL mdmInitiated;
@property BOOL buddyInitiated;
@property (retain) NSString *requestedProductMarketingVersion;

+ (id)optionsWithBackground:(BOOL)a0 mdmInitiated:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
