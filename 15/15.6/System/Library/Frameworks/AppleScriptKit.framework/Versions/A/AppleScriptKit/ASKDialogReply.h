@class NSString;

@interface ASKDialogReply : NSObject {
    NSString *_buttonReturned;
    NSString *_textReturned;
    char _gaveUp;
}

+ (id)replyWithButtonReturned:(id)a0 textReturned:(id)a1 gaveUp:(char)a2;

- (void)dealloc;
- (id)buttonReturned;
- (char)gaveUp;
- (id)initWithButtonReturned:(id)a0 textReturned:(id)a1 gaveUp:(char)a2;
- (id)textReturned;

@end
