@class NSArray, NSString, EWSSingleRecipientType;

@interface EWSMessageType : EWSItemType <XSRedactionInformation>

@property (retain, nonatomic) EWSSingleRecipientType *Sender;
@property (copy, nonatomic) NSArray *ToRecipients;
@property (copy, nonatomic) NSArray *CcRecipients;
@property (copy, nonatomic) NSArray *BccRecipients;
@property (nonatomic) char IsReadReceiptRequested;
@property (nonatomic) char IsReadReceiptRequestedSpecified;
@property (nonatomic) char IsDeliveryReceiptRequested;
@property (nonatomic) char IsDeliveryReceiptRequestedSpecified;
@property (copy, nonatomic) NSString *ConversationTopic;
@property (retain, nonatomic) EWSSingleRecipientType *From;
@property (copy, nonatomic) NSString *InternetMessageId;
@property (nonatomic) char IsRead;
@property (nonatomic) char IsReadSpecified;
@property (nonatomic) char IsResponseRequested;
@property (nonatomic) char IsResponseRequestedSpecified;
@property (copy, nonatomic) NSString *References;
@property (copy, nonatomic) NSArray *ReplyTo;
@property (retain, nonatomic) EWSSingleRecipientType *ReceivedBy;
@property (retain, nonatomic) EWSSingleRecipientType *ReceivedRepresenting;
@property (readonly, nonatomic) char elementsNeedRedaction;
@property (readonly, copy, nonatomic) NSArray *allowedElementKeys;

+ (id)definition;

- (void).cxx_destruct;

@end
