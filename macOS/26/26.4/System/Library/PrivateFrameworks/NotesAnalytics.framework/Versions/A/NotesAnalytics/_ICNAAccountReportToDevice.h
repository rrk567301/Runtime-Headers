@class NSMutableDictionary;

@interface _ICNAAccountReportToDevice : NSObject

@property (retain, nonatomic) NSMutableDictionary *countOfAccountsByType;
@property (retain, nonatomic) NSMutableDictionary *countOfNotesByType;

- (void).cxx_destruct;
- (id)init;
- (id)accountTypeSummary;
- (void)reportAccountType:(long long)a0 noteCount:(unsigned long long)a1;

@end
