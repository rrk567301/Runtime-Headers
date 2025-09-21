@class NSString, NSArray, NSDictionary, NSDate;

@interface IMUnreadCountReport : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=setGUID:) NSString *guid;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *originalGroupID;
@property (retain, nonatomic) NSString *lastAddressedHandleID;
@property (retain, nonatomic) NSString *lastAddressedSIMID;
@property (nonatomic) long long isFiltered;
@property (nonatomic, getter=isBlackholed) BOOL blackholed;
@property (nonatomic, getter=isArchived) BOOL archived;
@property (retain, nonatomic) NSArray *participants;
@property (retain, nonatomic) NSDate *timeSensitiveRefreshDate;
@property (nonatomic) long long timeSensitiveMessageCount;
@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic, getter=isPendingReview) BOOL pendingReview;
@property (readonly, nonatomic) NSDictionary *dictionary;

+ (BOOL)_dateEquals:(id)a0 date2:(id)a1;
+ (BOOL)_stringEquals:(id)a0 string:(id)a1;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithGUID:(id)a0 groupID:(id)a1 originalGroupID:(id)a2 lastAddressedHandleID:(id)a3 lastAddressedSIMID:(id)a4 isFiltered:(long long)a5 isBlackholed:(BOOL)a6 isArchived:(BOOL)a7 participants:(id)a8 timeSensitiveRefreshDate:(id)a9 timeSensitiveMessageCount:(long long)a10 unreadCount:(unsigned long long)a11 isPendingReview:(BOOL)a12;

@end
