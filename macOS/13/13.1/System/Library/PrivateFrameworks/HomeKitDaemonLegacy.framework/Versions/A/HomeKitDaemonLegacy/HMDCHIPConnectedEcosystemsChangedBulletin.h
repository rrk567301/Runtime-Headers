@class NSString, NSDictionary, NSDate;

@interface HMDCHIPConnectedEcosystemsChangedBulletin : HMFObject

@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *body;
@property (readonly, copy) NSString *threadIdentifier;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, getter=isTimeSensitive) BOOL timeSensitive;

+ (id)localizedTitleForAddedEcosystemName:(id)a0;
+ (id)localizedBodyForAddedEcosystemHomeName:(id)a0 accessoryName:(id)a1 accessoryCategory:(id)a2;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithTitle:(id)a0 body:(id)a1 threadIdentifier:(id)a2 dateOfOccurrence:(id)a3 userInfo:(id)a4 isTimeSensitive:(BOOL)a5;
- (id)initWithAddedPairing:(id)a0 accessory:(id)a1;

@end
