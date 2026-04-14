@class ICNFMCMimePart;

@interface _ICNFMCMimePartEnumerator : NSEnumerator

@property (readonly, nonatomic) BOOL onlyAttachments;
@property (nonatomic) BOOL isFirstIteration;
@property (retain, nonatomic) ICNFMCMimePart *currentPart;

- (id)nextObject;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMimeBody:(id)a0 onlyAttachments:(BOOL)a1;

@end
