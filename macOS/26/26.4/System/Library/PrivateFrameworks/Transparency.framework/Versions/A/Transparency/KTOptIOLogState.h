@class NSString, NSDate;

@interface KTOptIOLogState : NSObject

@property (retain) NSString *uri;
@property (retain) NSDate *smtTimestamp;
@property BOOL optIn;

- (void).cxx_destruct;
- (id)description;
- (id)initWithURI:(id)a0 smtTimestamp:(id)a1 optIn:(BOOL)a2;

@end
