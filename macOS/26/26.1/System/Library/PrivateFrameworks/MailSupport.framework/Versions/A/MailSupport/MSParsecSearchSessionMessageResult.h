@class SFMailRankingSignals, NSString;

@interface MSParsecSearchSessionMessageResult : NSObject <MSParsecSearchSessionResult>

@property (readonly, nonatomic) long long messageAge;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) SFMailRankingSignals *mailRankingSignals;
@property (readonly, nonatomic) NSString *resultID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultWithIdentifier:(id)a0;
+ (id)resultWithIdentifier:(id)a0 date:(id)a1;
+ (id)resultWithIdentifier:(id)a0 date:(id)a1 type:(int)a2 mailRankingSignals:(id)a3;

- (void).cxx_destruct;
- (id)feedbackResult;
- (id)initResultWithIdentifier:(id)a0 date:(id)a1;
- (id)initResultWithIdentifier:(id)a0 date:(id)a1 type:(int)a2;
- (id)initResultWithIdentifier:(id)a0 date:(id)a1 type:(int)a2 mailRankingSignals:(id)a3;

@end
