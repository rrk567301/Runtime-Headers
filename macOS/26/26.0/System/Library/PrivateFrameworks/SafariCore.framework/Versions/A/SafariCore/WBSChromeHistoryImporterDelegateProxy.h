@class NSMutableSet;
@protocol WBSHistoryImporterDelegate, NSXPCProxyCreating;

@interface WBSChromeHistoryImporterDelegateProxy : NSObject <WBSHistoryImporterDelegate> {
    id<WBSHistoryImporterDelegate, NSXPCProxyCreating> _delegate;
    NSMutableSet *_uniqueHighLevelDomains;
}

@property (readonly, nonatomic) unsigned long long numberOfVisitImported;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)addVisitWithURLString:(id)a0 visitTime:(double)a1 title:(id)a2 loadSuccessful:(BOOL)a3 httpGet:(BOOL)a4 redirectSourceURLString:(id)a5 redirectSourceVisitTime:(double)a6 redirectDestinationURLString:(id)a7 redirectDestinationVisitTime:(double)a8 visitCount:(unsigned long long)a9;

@end
