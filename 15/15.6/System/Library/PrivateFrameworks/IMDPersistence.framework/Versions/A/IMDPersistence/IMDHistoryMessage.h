@class NSError, NSString, NSMutableArray, NSDate, NSAttributedString, IMDHistoryHandle;

@interface IMDHistoryMessage : NSObject <NSCoding> {
    NSAttributedString *_text;
}

@property (retain, nonatomic) NSAttributedString *appKitText;
@property (retain, nonatomic) NSAttributedString *superText;
@property (retain) IMDHistoryHandle *sender;
@property (retain) IMDHistoryHandle *recipient;
@property (retain) NSDate *time;
@property (retain) NSAttributedString *text;
@property long long flags;
@property (retain) NSString *guid;
@property (retain) id color;
@property (retain) NSError *error;
@property (retain) NSAttributedString *messageSubject;
@property long long baseWritingDirection;
@property (retain) NSMutableArray *attachments;

- (void)dealloc;
- (id)description;
- (char)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)text;
- (char)isFromMe;
- (char)isSent;
- (char)isEmote;
- (char)isSystemMessage;
- (char)isAutoReply;
- (char)isDelayed;
- (char)isMessage;
- (char)isServiceMessage;

@end
