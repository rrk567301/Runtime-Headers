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

- (void)setGroupName:(id)a0;
- (id)groupName;
- (id)bodyText;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)effect;
- (void)setEffect:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setBodyText:(id)a0;
- (void).cxx_destruct;
- (id)recipientAddresses;
- (void)setRecipientAddresses:(id)a0;
- (id)chatIdentifier;
- (id)attachmentURL;
- (void)setAttachmentURL:(id)a0;
- (void)setGroupNameId:(id)a0;
- (id)groupNameId;
- (void)setChatIdentifier:(id)a0;
- (void)setSubjectText:(id)a0;
- (id)_aceContextObjectValue;
- (void)_setSenderInternalGUID:(id)a0;
- (BOOL)isOutbound;
- (id)sendDate;
- (id)senderAddress;
- (id)senderInternalGUID;
- (void)setOutbound:(BOOL)a0;
- (void)setSendDate:(id)a0;
- (void)setSenderAddress:(id)a0;
- (id)subjectText;

@end
