@class NSString, NSDictionary, NSArray, NSDate;

@interface IMDIndexableChatRecord : NSObject

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) unsigned char chatStyle;
@property (readonly, nonatomic) NSString *loginID;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSString *chatIdentifier;
@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) NSString *originalGroupID;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *lastAddressedLocalHandle;
@property (readonly, nonatomic) NSString *groupPhotoGUID;
@property (readonly, nonatomic) NSString *groupPhotoPath;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic, getter=isFiltered) long long filtered;
@property (readonly, nonatomic, getter=isBlackholed) BOOL blackholed;
@property (readonly, nonatomic) long long syndicationType;
@property (readonly, nonatomic) NSDate *syndicationDate;
@property (readonly, nonatomic) NSDate *lastMessageDate;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithChatRecord:(id)a0 copyLastMessageDate:(BOOL)a1;

@end
