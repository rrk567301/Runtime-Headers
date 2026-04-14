@class NSString, TUContinuityHandleAnonym, CNContact;

@interface TUContinuityFavorite : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) TUContinuityHandleAnonym *anonym;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 contactIdentifier:(id)a1 anonym:(id)a2 actionType:(id)a3 bundleIdentifier:(id)a4;

@end
