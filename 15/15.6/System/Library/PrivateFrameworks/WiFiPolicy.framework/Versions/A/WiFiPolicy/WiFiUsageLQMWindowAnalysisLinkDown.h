@class NSString;

@interface WiFiUsageLQMWindowAnalysisLinkDown : WiFiUsageLQMWindowAnalysis

@property (nonatomic) char isInvoluntary;
@property (retain, nonatomic) NSString *linkDownReason;
@property (nonatomic) long long linkDownSubreason;
@property (nonatomic) unsigned long long linkUpDuration;

- (void).cxx_destruct;
- (id)initWithRollingWindow:(id)a0 WithIsInvoluntary:(char)a1 AndLinkChangeReason:(long long)a2 AndLinkChangeSubreason:(long long)a3 AndDuration:(unsigned long long)a4 andContext:(struct context { char x0; char x1; char x2; })a5 AndTimestamp:(id)a6 onQueue:(id)a7;
- (id)addDimensionsTo:(id)a0;

@end
