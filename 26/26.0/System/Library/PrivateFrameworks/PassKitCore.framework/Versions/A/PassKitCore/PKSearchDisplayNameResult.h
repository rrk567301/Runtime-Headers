@class NSString, PKMerchant;

@interface PKSearchDisplayNameResult : NSObject <PKSearchAutocompleteToken>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) PKMerchant *merchant;
@property (retain, nonatomic) NSString *orderSpotlightDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)tokenType;

@end
