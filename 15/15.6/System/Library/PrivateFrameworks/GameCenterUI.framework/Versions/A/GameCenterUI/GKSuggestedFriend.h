@class NSString, CNContact;

@interface GKSuggestedFriend : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *contactAssociationID;
@property (readonly, nonatomic) char supportsFriendingViaPush;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0 contactAssociationID:(id)a1 supportsFriendingViaPush:(char)a2;

@end
