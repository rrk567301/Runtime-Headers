@class NSString, NSArray;

@interface FAPropertyEligibilityRequirements : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) char hasRecommendedMembers;
@property (readonly, copy, nonatomic) NSString *expectedMediaAltDSID;
@property (readonly, nonatomic) char serverEligibility;
@property (readonly, copy, nonatomic) NSArray *activeBundleIDs;
@property (readonly, nonatomic) id serverPayload;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyName:(id)a0 dictionaryRepresentation:(id)a1;
- (id)initWithPropertyName:(id)a0 hasRecommendedMembers:(char)a1 expectedMediaAltDSID:(id)a2 serverEligibility:(char)a3 activeBundleIDs:(id)a4 serverPayload:(id)a5;

@end
