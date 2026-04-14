@class NSString, STContactAddress, NSArray, NSURL, NSDate;

@interface STSiriMessage : STSiriModelObject {
    BOOL _outbound;
    STContactAddress *_senderAddress;
    NSString *_senderInternalGUID;
    NSArray *_recipientAddresses;
    NSString *_groupName;
    NSString *_groupNameId;
    NSString *_subjectText;
    NSString *_bodyText;
    NSString *_effect;
    NSURL *_attachmentURL;
    NSDate *_sendDate;
    NSString *_chatIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setGroupName:(id)a0;
- (id)groupName;
- (void)setRecipientAddresses:(id)a0;
- (id)recipientAddresses;
- (void)setEffect:(id)a0;
- (id)effect;
- (id)attachmentURL;
- (void)setAttachmentURL:(id)a0;
- (id)chatIdentifier;
- (void)setChatIdentifier:(id)a0;
- (id)groupNameId;
- (void)setGroupNameId:(id)a0;
- (id)bodyText;
- (void)setBodyText:(id)a0;
- (id)_aceContextObjectValue;
- (id)sendDate;
- (BOOL)isOutbound;
- (id)subjectText;
- (id)senderAddress;
- (void)setOutbound:(BOOL)a0;
- (void)setSenderAddress:(id)a0;
- (id)senderInternalGUID;
- (void)_setSenderInternalGUID:(id)a0;
- (void)setSubjectText:(id)a0;
- (void)setSendDate:(id)a0;

@end
