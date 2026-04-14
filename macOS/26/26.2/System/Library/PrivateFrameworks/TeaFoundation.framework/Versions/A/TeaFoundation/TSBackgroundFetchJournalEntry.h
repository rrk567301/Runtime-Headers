@class NSString, NSDate;

@interface TSBackgroundFetchJournalEntry : NSObject {
    void /* function */ reason;
    void /* unknown type, empty encoding */ date;
}

@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSDate *date;

- (void).cxx_destruct;
- (id)init;
- (id)initWithReason:(id)a0 date:(id)a1;

@end
