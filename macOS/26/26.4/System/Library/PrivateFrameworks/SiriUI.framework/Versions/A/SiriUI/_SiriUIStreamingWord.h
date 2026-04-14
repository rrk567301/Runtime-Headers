@interface _SiriUIStreamingWord : SiriUITintedImageView

@property (retain, nonatomic) _SiriUIStreamingWord *previous;
@property (nonatomic) long long insertType;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (nonatomic) double glyphLocationInWordX;

+ (id)defaultAnimationForKey:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isFlipped;

@end
