@class NSString, NSDate;

@interface IMDSpamCheckRequeryTrackerRecord : NSObject

@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) NSString *chatGUID;

- (void).cxx_destruct;
- (id)initWithMessageGUID:(id)a0 chatGUID:(id)a1;

@end
