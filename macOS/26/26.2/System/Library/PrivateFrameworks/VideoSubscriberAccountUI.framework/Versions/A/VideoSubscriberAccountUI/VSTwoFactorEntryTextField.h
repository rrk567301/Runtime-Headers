@class NSString;

@interface VSTwoFactorEntryTextField : NSObject

@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long expectedLength;
@property (nonatomic) BOOL autoShowKeyboard;
@property (copy, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)init;

@end
