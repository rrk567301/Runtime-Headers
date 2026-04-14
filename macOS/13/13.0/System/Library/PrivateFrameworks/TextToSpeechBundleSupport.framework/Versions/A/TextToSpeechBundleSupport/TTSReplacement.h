@class NSString;

@interface TTSReplacement : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSString *replacement;

- (void).cxx_destruct;

@end
