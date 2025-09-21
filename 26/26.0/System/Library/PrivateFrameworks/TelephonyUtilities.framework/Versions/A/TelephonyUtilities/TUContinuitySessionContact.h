@class NSString, NSSet, CNContact;

@interface TUContinuitySessionContact : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSSet *anonyms;
@property (readonly, nonatomic) NSString *displayName;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 contactIdentifier:(id)a1 anonyms:(id)a2;

@end
