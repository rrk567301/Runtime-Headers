@class NSString;

@interface ASKDialogReply : NSObject {
    NSString *_buttonReturned;
    NSString *_textReturned;
    BOOL _gaveUp;
}

+ (id)replyWithButtonReturned:(id)a0 textReturned:(id)a1 gaveUp:(BOOL)a2;

- (void)dealloc;
- (id)buttonReturned;
- (id)textReturned;
- (BOOL)gaveUp;
- (id)initWithButtonReturned:(id)a0 textReturned:(id)a1 gaveUp:(BOOL)a2;

@end
