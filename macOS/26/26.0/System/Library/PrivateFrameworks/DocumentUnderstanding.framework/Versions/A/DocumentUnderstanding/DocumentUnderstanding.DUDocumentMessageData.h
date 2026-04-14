@class NSString, NSArray;

@interface DocumentUnderstanding.DUDocumentMessageData : NSObject <NSCoding, NSCopying> {
    void /* function */ conversationIdentifier;
    void /* function */ creatorHandle;
    void /* function */ recipientHandles;
    void /* function */ recipientNames;
    void /* function */ attachmentFileName;
    void /* function */ attachmentFilePath;
}

@property (nonatomic, copy) NSString *conversationIdentifier;
@property (nonatomic, copy) NSString *creatorHandle;
@property (nonatomic, copy) NSArray *recipientHandles;
@property (nonatomic, copy) NSArray *recipientNames;
@property (nonatomic, copy) NSString *attachmentFileName;
@property (nonatomic, copy) NSString *attachmentFilePath;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
