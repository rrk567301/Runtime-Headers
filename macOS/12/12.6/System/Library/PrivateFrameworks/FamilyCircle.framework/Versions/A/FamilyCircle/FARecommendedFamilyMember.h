@class NSString, CNContact;

@interface FARecommendedFamilyMember : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *handle;
@property (copy) NSString *displayName;
@property (retain) CNContact *contact;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_safeClasses;
- (id)initWithRecommendation:(id)a0;

@end
