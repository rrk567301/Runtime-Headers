@class NSString, PRSSearchSession, NSArray, SFEngagementSignal, NSDictionary, PRSSearchFeedback, NSObject, SPSearchQueryContext;
@protocol OS_dispatch_queue, PRSSearchQueryHandler;

@interface PRSQueryTask : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL started;
@property (nonatomic) BOOL canceled;
@property (retain) PRSSearchFeedback *feedback;
@property (weak, nonatomic) id<PRSSearchQueryHandler> handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) PRSSearchSession *session;
@property (retain, nonatomic) NSString *fbq;
@property BOOL webSearch;
@property long long queryId;
@property (retain, nonatomic) NSDictionary *category_stats;
@property (retain, nonatomic) NSDictionary *server_features;
@property (retain, nonatomic) NSArray *parsecCategoryOrder;
@property (retain, nonatomic) NSDictionary *serverRelevanceScores;
@property (nonatomic) float serverRelevanceScoreThreshold;
@property (retain, nonatomic) SFEngagementSignal *engagementSignal;
@property (weak, nonatomic) id representedObject;
@property (readonly, nonatomic) SPSearchQueryContext *queryContext;
@property (retain, nonatomic) NSString *queryString;
@property unsigned long long queryIdent;

+ (void)initialize;
+ (void)suspendDecoding;
+ (void)resumeDecoding;

- (void)cancel;
- (void)encodeWithCoder:(id)a0;
- (void)resume;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)invalidateHandler;
- (void)setParsecState:(BOOL)a0;
- (id)feedbackQueryIdentifier;
- (id)initWithSession:(id)a0 handler:(id)a1 queue:(id)a2 feedback:(id)a3 queryContext:(id)a4;

@end
