@class NSError, NSAttributedString, EFFuture;

@interface MUIManualSummaryContext : NSObject

@property (retain, nonatomic) EFFuture *summaryControllerFuture;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSAttributedString *summary;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long summarizableMessageCount;
@property (nonatomic) BOOL isInlineSummary;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSummary:(id)a0 error:(id)a1 summarizableMessageCount:(unsigned long long)a2 isInlineSummary:(BOOL)a3 summaryControllerFuture:(id)a4;

@end
