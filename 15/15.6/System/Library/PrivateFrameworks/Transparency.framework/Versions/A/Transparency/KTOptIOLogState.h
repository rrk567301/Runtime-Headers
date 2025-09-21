@class NSString, NSDate;

@interface KTOptIOLogState : NSObject

@property (retain) NSString *uri;
@property (retain) NSDate *smtTimestamp;
@property char optIn;

- (id)description;
- (void).cxx_destruct;
- (id)initWithURI:(id)a0 smtTimestamp:(id)a1 optIn:(char)a2;

@end
