@class NSArray, IMMessageAcknowledgmentChatItem, IMTapback;

@interface IMAggregateAcknowledgmentChatItem : IMAssociatedMessageChatItem

@property (readonly, copy, nonatomic) NSArray *acknowledgments;
@property (readonly, nonatomic) IMMessageAcknowledgmentChatItem *fromMeAcknowledgement;
@property (readonly, nonatomic) char includesFromMe;
@property (readonly, nonatomic) char latestIsFromMe;
@property (readonly, nonatomic) char includesMultiple;
@property (readonly, nonatomic) IMTapback *latestTapback;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)canDelete;
- (id)_initWithAcknowledgments:(id)a0;
- (char)supportsCommunicationSafety;

@end
