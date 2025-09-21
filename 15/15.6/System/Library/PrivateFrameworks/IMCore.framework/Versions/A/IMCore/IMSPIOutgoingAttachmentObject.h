@class NSString;

@interface IMSPIOutgoingAttachmentObject : NSObject

@property (retain) NSString *fileURL;
@property char isSensitive;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 isSensitive:(char)a1;

@end
