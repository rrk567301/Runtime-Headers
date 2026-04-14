@class NSString, NSArray, NSDate;

@interface DocumentUnderstanding.DUDocumentEmailData : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ subject;
    void /* unknown type, empty encoding */ senderName;
    void /* unknown type, empty encoding */ senderEmail;
    void /* unknown type, empty encoding */ senderDomain;
    void /* unknown type, empty encoding */ recipientNames;
    void /* unknown type, empty encoding */ recipientEmails;
    void /* unknown type, empty encoding */ ccNames;
    void /* unknown type, empty encoding */ ccEmails;
    void /* unknown type, empty encoding */ bccNames;
    void /* unknown type, empty encoding */ bccEmails;
    void /* unknown type, empty encoding */ dateReceived;
}

@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSString *senderName;
@property (nonatomic, copy) NSString *senderEmail;
@property (nonatomic, copy) NSString *senderDomain;
@property (nonatomic, copy) NSArray *recipientNames;
@property (nonatomic, copy) NSArray *recipientEmails;
@property (nonatomic, copy) NSArray *ccNames;
@property (nonatomic, copy) NSArray *ccEmails;
@property (nonatomic, copy) NSArray *bccNames;
@property (nonatomic, copy) NSArray *bccEmails;
@property (nonatomic, copy) NSDate *dateReceived;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
