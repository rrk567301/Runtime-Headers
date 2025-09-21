@class ICNFMCMimePart;

@interface _ICNFMCMimePartEnumerator : NSEnumerator

@property (readonly, nonatomic) char onlyAttachments;
@property (nonatomic) char isFirstIteration;
@property (retain, nonatomic) ICNFMCMimePart *currentPart;

- (id)init;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithMimeBody:(id)a0 onlyAttachments:(char)a1;

@end
