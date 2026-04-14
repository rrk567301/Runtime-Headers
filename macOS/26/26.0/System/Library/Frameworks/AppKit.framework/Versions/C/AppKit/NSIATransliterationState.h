@class NSString;

@interface NSIATransliterationState : NSObject

@property (copy, nonatomic) NSString *markedText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } cursorPositionRange;

- (void)reset;
- (id)init;
- (void).cxx_destruct;

@end
