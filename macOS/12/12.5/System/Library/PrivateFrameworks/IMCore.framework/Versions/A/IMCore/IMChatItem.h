@class NSString, IMItem;

@interface IMChatItem : NSObject <NSCopying> {
    IMItem *_item;
}

@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canReply;
@property (readonly, retain, nonatomic) NSString *balloonBundleID;
@property (readonly, nonatomic) long long syndicationBehavior;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) long long syndicationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_item;
- (id)_initWithItem:(id)a0;
- (id)_parentItem;
- (BOOL)isReplyContextPreview;
- (BOOL)itemIsThreadOriginatorWithThreadIdentifier:(id *)a0;
- (BOOL)itemIsReply;
- (BOOL)itemIsReplyContextPreview;
- (BOOL)itemIsThreadOriginator;
- (id)threadGroupIdentifier;
- (BOOL)itemIsReplyCount;
- (void)_setTimeAdded:(id)a0;
- (id)_timeAdded;
- (id)_timeStale;

@end
