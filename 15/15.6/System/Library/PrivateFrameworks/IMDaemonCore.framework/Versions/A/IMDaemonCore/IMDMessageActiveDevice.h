@class NSString, NSDate;

@interface IMDMessageActiveDevice : NSObject

@property (retain, nonatomic) NSString *idsDestination;
@property (retain, nonatomic) NSDate *latestActiveDate;
@property (nonatomic) char hasReceivedReadReceipt;
@property (retain, nonatomic) NSDate *latestReadReceipt;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_hasReceivedReadReceiptRecently;
- (id)initWithIDSDestination:(id)a0 latestDate:(id)a1 latestReadReceiptDate:(id)a2 hasReceivedReadReceipt:(char)a3;
- (char)shouldDisplayAttachmentDownloadFailure;
- (char)shouldDisplayRemoteDecryptionFailure;
- (char)shouldSendTypingIndicator;

@end
