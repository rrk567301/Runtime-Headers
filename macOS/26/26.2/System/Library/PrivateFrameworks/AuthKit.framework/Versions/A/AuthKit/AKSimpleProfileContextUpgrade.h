@class NSString;

@interface AKSimpleProfileContextUpgrade : AKSimpleProfileContext

@property (copy, nonatomic) NSString *followUpItemIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0 followUpIdentifier:(id)a1;
- (id)sponsorAltDSID;

@end
