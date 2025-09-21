@class NSString, NSNumber, NSDate;

@interface AAFamilyMember : NSObject

@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSNumber *personID;
@property (copy, nonatomic) NSString *personIDHash;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *joinDate;
@property (nonatomic) char isMe;
@property (nonatomic) char isChild;
@property (nonatomic) char isSharingPurchases;
@property (nonatomic) char isOrganizer;
@property (copy, nonatomic) NSString *iTunesNotLinkedMessage;
@property (copy, nonatomic) NSString *linkediTunesAppleID;
@property (copy, nonatomic) NSNumber *linkediTunesDSID;
@property (nonatomic) char areParentalControlsEnabled;
@property (nonatomic) char isAskToBuyEnabled;

- (void).cxx_destruct;

@end
