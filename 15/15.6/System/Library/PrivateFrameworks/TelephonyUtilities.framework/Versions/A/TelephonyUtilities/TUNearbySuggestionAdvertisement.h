@class NSUUID, NSString;

@interface TUNearbySuggestionAdvertisement : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *suggestionIdentifier;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) long long type;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestion:(id)a0;
- (id)initWithSuggestionIdentifier:(id)a0 deviceIdentifier:(id)a1 type:(long long)a2;
- (char)isEqualToSuggestionAdvertisement:(id)a0;

@end
