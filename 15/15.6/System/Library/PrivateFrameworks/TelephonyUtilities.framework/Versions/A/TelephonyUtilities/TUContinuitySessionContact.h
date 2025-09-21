@class NSString, NSSet, CNContact;

@interface TUContinuitySessionContact : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSSet *anonyms;
@property (readonly, nonatomic) NSString *displayName;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContact:(id)a0 contactIdentifier:(id)a1 anonyms:(id)a2;

@end
