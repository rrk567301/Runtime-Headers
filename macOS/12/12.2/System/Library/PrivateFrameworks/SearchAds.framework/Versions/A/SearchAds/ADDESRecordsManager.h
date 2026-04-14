@class NSString;

@interface ADDESRecordsManager : NSObject

@property (retain, nonatomic) NSString *searchRequestID;

- (id)init;
- (void).cxx_destruct;
- (void)addOriginalAdRecordsToDES:(id)a0 responseTypeString:(id)a1 organics:(id)a2;
- (void)addRerankedAdRecordsToDES:(id)a0;

@end
