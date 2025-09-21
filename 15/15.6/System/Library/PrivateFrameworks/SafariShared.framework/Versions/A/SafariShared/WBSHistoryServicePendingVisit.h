@class NSString, WBSHistoryVisitIdentifier;

@interface WBSHistoryServicePendingVisit : NSObject

@property (readonly, nonatomic) WBSHistoryVisitIdentifier *visitIdentifier;
@property (nonatomic) unsigned long long operation;
@property (retain, nonatomic) WBSHistoryVisitIdentifier *sourceVisitIdentifier;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) char wasHTTPNonGet;
@property (nonatomic) char loadSuccessful;
@property (nonatomic) long long origin;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) long long statusCode;
@property (nonatomic) unsigned long long visitCount;
@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) double visitTime;
@property (readonly, nonatomic) unsigned long long score;

- (void).cxx_destruct;
- (id)initWithWithVisitIdentifier:(id)a0;

@end
