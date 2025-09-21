@class NSString;

@interface SUOSUMSUScanOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char background;
@property char mdmInitiated;
@property char buddyInitiated;
@property (retain) NSString *requestedProductMarketingVersion;

+ (id)optionsWithBackground:(char)a0 mdmInitiated:(char)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
