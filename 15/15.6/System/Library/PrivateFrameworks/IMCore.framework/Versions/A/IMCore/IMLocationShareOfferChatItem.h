@class NSString, IMHandle, NSDate;

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem>

@property (readonly, nonatomic) long long offerState;
@property (readonly, nonatomic) char actionableEclipsed;
@property (readonly, nonatomic) char isFromMe;
@property (readonly, nonatomic) char failed;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 sender:(id)a1;
- (char)_isActionableEclipsed;
- (void)_setActionableEclipsed:(char)a0;

@end
