@class NSString;

@interface IRTTRpopup : NSObject

@property (retain, nonatomic) NSString *header;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *otherButton;
@property (retain, nonatomic) NSString *defaultButton;
@property (retain, nonatomic) NSString *alternateButton;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char ttrWillOpen;
@property (nonatomic) char dismissWillStop;

- (void).cxx_destruct;
- (id)initWithHeader:(id)a0 key:(id)a1 message:(id)a2 defaultButton:(id)a3 otherButton:(id)a4 alternateButton:(id)a5 ttrWillOpen:(char)a6 dismissWillStop:(char)a7;

@end
