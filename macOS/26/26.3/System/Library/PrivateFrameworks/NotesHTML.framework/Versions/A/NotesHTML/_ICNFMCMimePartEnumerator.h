@class ICNFMCMimePart;

@interface _ICNFMCMimePartEnumerator : NSEnumerator

@property (readonly, nonatomic) BOOL onlyAttachments;
@property (nonatomic) BOOL isFirstIteration;
@property (retain, nonatomic) ICNFMCMimePart *currentPart;

- (id)nextObject;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMimeBody:(id)a0 onlyAttachments:(BOOL)a1;

@end
