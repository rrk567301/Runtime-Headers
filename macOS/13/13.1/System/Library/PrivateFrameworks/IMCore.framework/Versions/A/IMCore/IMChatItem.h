@class NSString, IMItem;

@interface IMChatItem : NSObject <NSCopying>

@property (retain, nonatomic) IMItem *item;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canReply;
@property (readonly, nonatomic) BOOL canRetract;
@property (readonly, nonatomic) BOOL canEditMessageText;
@property (readonly, retain, nonatomic) NSString *balloonBundleID;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) long long syndicationBehavior;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) long long syndicationType;
@property (readonly, nonatomic) BOOL wasDetonated;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_item;
- (id)_parentItem;
- (id)_initWithItem:(id)a0;
- (BOOL)itemIsReply;
- (BOOL)itemIsReplyContextPreview;
- (BOOL)itemIsThreadOriginator;
- (BOOL)itemIsThreadOriginatorWithThreadIdentifier:(id *)a0;
- (id)threadGroupIdentifier;
- (BOOL)itemIsReplyCount;
- (BOOL)isEditedMessageHistory;
- (BOOL)isReplyContextPreview;
- (id)_timeStale;
- (id)_timeAdded;
- (void)_setTimeAdded:(id)a0;

@end
