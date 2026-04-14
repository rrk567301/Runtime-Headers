@class NSString, NSMutableData, NSDate;

@interface JournalRecordInfo : NSObject

@property (readonly) NSString *journalName;
@property (readonly) NSDate *lastUpdate;
@property (readonly) NSMutableData *journalData;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithJournalName:(id)a0 lastUpdate:(id)a1 journalData:(id)a2;

@end
