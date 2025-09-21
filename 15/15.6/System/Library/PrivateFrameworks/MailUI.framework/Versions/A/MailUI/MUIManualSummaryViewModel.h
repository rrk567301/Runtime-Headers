@class NSError, NSAttributedString, EFFuture;

@interface MUIManualSummaryViewModel : NSObject

@property (nonatomic) long long state;
@property (copy, nonatomic) NSAttributedString *summary;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) char isInlineSummary;
@property (nonatomic) char isExternalSummary;
@property (retain, nonatomic) EFFuture *summaryControllerFuture;
@property (nonatomic) unsigned long long summarizableMessageCount;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithState:(long long)a0 summary:(id)a1 error:(id)a2 summarizableMessageCount:(unsigned long long)a3 isInlineSummary:(char)a4 isExternalSummary:(char)a5 summaryControllerFuture:(id)a6;
- (void)resetToInitialState;
- (void)updateToCompleteStateWithSummary:(id)a0 isExternalSummary:(char)a1;
- (void)updateToErrorState:(id)a0;
- (void)updateToLoadingState;

@end
