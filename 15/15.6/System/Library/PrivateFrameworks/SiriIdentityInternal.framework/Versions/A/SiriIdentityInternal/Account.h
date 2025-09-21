@class NSString, NSNumber, NSData;

@interface Account : INObject

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, copy) NSString *profileId;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, retain) NSNumber *isActive;
@property (nonatomic) char matchedMultiple;
@property (nonatomic) char noNameMatched;
@property (nonatomic, copy) NSString *iCloudAltDSID;
@property (nonatomic, copy) NSString *homeUserID;
@property (nonatomic, copy) NSData *profileImage;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
