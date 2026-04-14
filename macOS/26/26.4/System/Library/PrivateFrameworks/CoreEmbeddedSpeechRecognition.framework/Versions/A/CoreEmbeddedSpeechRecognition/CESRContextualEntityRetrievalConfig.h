@class NSDictionary, NSArray, NSString;

@interface CESRContextualEntityRetrievalConfig : NSObject

@property (readonly, nonatomic) unsigned long long maxNumEnrolled;
@property (readonly, nonatomic) double retrievalTimeout;
@property (readonly, nonatomic) double processingTimeout;
@property (readonly, nonatomic) unsigned long long maxEntityChars;
@property (readonly, nonatomic) unsigned long long maxEntityWords;
@property (readonly, nonatomic) NSDictionary *rejectedScraped;
@property (readonly, nonatomic) NSDictionary *rejectedAppEntity;
@property (readonly, nonatomic) NSArray *enabledTasks;
@property (readonly, nonatomic) NSArray *enabledItemKinds;
@property (readonly, nonatomic) NSString *taggerType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMaxNumEnrolled:(unsigned long long)a0 retrievalTimeout:(double)a1 processingTimeout:(double)a2 maxEntityChars:(unsigned long long)a3 maxEntityWords:(unsigned long long)a4 rejectedScraped:(id)a5 rejectedAppEntity:(id)a6 enabledTasks:(id)a7 enabledItemKinds:(id)a8 taggerType:(id)a9;

@end
