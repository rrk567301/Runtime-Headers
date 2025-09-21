@class NSString, NSArray, NSDictionary, NSDate;

@interface DocumentUnderstanding.DUDocumentEmailData : NSObject <NSCoding, NSCopying> {
    void /* function */ subject;
    void /* function */ senderName;
    void /* function */ senderEmail;
    void /* function */ senderDomain;
    void /* function */ recipientNames;
    void /* function */ recipientEmails;
    void /* function */ ccNames;
    void /* function */ ccEmails;
    void /* function */ bccNames;
    void /* function */ bccEmails;
    void /* unknown type, empty encoding */ dateReceived;
    void /* function */ headers;
    void /* function */ text;
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
@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, copy) NSString *text;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
