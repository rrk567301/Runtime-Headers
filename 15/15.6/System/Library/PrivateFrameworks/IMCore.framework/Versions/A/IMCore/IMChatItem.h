@class NSString, IMItem;

@interface IMChatItem : NSObject <NSCopying>

@property (retain, nonatomic) IMItem *item;
@property (readonly, nonatomic) char canDelete;
@property (readonly, nonatomic) char canReply;
@property (readonly, nonatomic) char canRetract;
@property (readonly, nonatomic) char canEditMessageText;
@property (readonly, nonatomic) char supportsCommunicationSafety;
@property (readonly, nonatomic) NSString *commSafetyTransferGUID;
@property (readonly, nonatomic) long long fileTransferReloadStatus;
@property (readonly, retain, nonatomic) NSString *balloonBundleID;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) long long syndicationBehavior;
@property (readonly, nonatomic, getter=isHighlighted) char highlighted;
@property (readonly, nonatomic) long long syndicationType;
@property (readonly, nonatomic) char wasDetonated;
@property (readonly, nonatomic) NSString *itemGUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_item;
- (id)_initWithItem:(id)a0;
- (void)setNeedsReloadForTransferStatusChangeWithType:(long long)a0;
- (id)_parentItem;
- (void)_setTimeAdded:(id)a0;
- (id)_timeAdded;
- (id)_timeStale;
- (char)isEditedMessageHistory;
- (char)isReplyContextPreview;
- (char)itemIsReply;
- (char)itemIsReplyContextPreview;
- (char)itemIsReplyCount;
- (char)itemIsThreadOriginator;
- (char)itemIsThreadOriginatorWithThreadIdentifier:(id *)a0;
- (id)threadGroupIdentifier;

@end
