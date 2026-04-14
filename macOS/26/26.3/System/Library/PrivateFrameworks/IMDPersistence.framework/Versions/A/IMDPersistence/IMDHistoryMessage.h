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

- (BOOL)isMessage;
- (BOOL)isEmpty;
- (id)description;
- (id)text;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isDelayed;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isFromMe;
- (BOOL)isSent;
- (BOOL)isSystemMessage;
- (BOOL)isEmote;
- (BOOL)isAutoReply;
- (BOOL)isServiceMessage;

@end
