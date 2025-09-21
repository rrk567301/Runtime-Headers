@class NSUUID, NSString;

@interface TUNearbySuggestionAdvertisement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *suggestionIdentifier;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) long long type;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0;
- (id)initWithSuggestionIdentifier:(id)a0 deviceIdentifier:(id)a1 type:(long long)a2;
- (BOOL)isEqualToSuggestionAdvertisement:(id)a0;

@end
