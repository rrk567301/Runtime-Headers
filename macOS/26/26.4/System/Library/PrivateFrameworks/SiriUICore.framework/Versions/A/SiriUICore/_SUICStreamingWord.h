@class NSArray, NSImage, CALayer;

@interface _SUICStreamingWord : NSObject

@property (retain, nonatomic) _SUICStreamingWord *previous;
@property (nonatomic) long long insertType;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (retain, nonatomic) NSArray *emojiRangesInText;
@property (nonatomic) double glyphLocationInWordX;
@property (nonatomic) double glyphWidthInWordX;
@property (readonly, nonatomic) CALayer *wordLayer;
@property (retain, nonatomic) NSImage *beginImage;
@property (retain, nonatomic) NSImage *endImage;

- (void).cxx_destruct;
- (id)init;
- (void)createWordLayer;

@end
