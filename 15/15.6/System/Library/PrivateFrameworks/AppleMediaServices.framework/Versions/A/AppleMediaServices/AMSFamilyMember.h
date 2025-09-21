@class NSDictionary, NSString, NSNumber;

@interface AMSFamilyMember : NSObject

@property (getter=isCurrentSignedInUser) char currentSignedInUser;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, getter=isAskToBuyEnabled) char askToBuyEnabled;
@property (readonly) NSString *firstName;
@property (readonly) NSNumber *iCloudDSID;
@property (readonly) NSString *iCloudUsername;
@property (readonly) NSNumber *iTunesDSID;
@property (readonly) NSString *iTunesUsername;
@property (readonly) NSString *lastName;
@property (readonly, getter=isSharingPurchases) char sharingPurchases;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
