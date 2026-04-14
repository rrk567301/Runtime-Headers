@interface _SiriUIStreamingWord : SiriUITintedImageView

@property (retain, nonatomic) _SiriUIStreamingWord *previous;
@property (nonatomic) long long insertType;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (nonatomic) double glyphLocationInWordX;

+ (id)defaultAnimationForKey:(id)a0;

- (BOOL)isFlipped;
- (id)init;
- (void).cxx_destruct;

@end
