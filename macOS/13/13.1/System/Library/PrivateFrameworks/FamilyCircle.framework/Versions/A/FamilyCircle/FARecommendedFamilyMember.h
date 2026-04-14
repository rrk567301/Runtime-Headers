@class NSString, CNContact;

@interface FARecommendedFamilyMember : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *handle;
@property (copy) NSString *iMessageHandle;
@property (copy) NSString *displayName;
@property (retain) CNContact *contact;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRecommendation:(id)a0;
- (id)contactFromRecommendationWithIdentifier:(id)a0;
- (id)_safeClasses;

@end
