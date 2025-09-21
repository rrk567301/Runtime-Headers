@class NSString;

@interface ACSHKeyboardCapInfo : NSObject

@property (copy) NSString *keyCapString;
@property char isDeadKey;

+ (id)keyboardCapInfoWithKeyCapString:(id)a0 isDeadKey:(char)a1;

- (void).cxx_destruct;

@end
