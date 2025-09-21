@class NSString;

@interface IMDAttachmentMetadata : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ permanentAttachmentGUID;
    void /* function */ messageGUID;
    void /* function */ handleID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *permanentAttachmentGUID;
@property (nonatomic, copy) NSString *messageGUID;
@property (nonatomic) BOOL fromMe;
@property (nonatomic, copy) NSString *handleID;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPermanentAttachmentGUID:(id)a0 messageGUID:(id)a1 fromMe:(BOOL)a2 handleID:(id)a3;

@end
