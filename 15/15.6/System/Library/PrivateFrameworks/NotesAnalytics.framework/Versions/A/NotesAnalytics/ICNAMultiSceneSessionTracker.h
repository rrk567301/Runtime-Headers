@class NSString, NSDictionary, ICASSessionSummaryData, NSObject;
@protocol OS_dispatch_queue;

@interface ICNAMultiSceneSessionTracker : NSObject

@property (retain, nonatomic) NSDictionary *sceneSessionTrackers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property (nonatomic, getter=isInvalidated) char invalidated;
@property (readonly, nonatomic) NSString *sessionDetailDescription;
@property (readonly, nonatomic) ICASSessionSummaryData *sessionSummaryData;
@property (readonly, nonatomic) long long sessionDetailType;
@property (readonly, nonatomic) char hasLiveTimers;

- (id)init;
- (void).cxx_destruct;
- (char)invalidated;
- (void)endNotesSession;
- (void)endPaperSession;
- (void)endAllSessionsAndInvalidate;
- (char)isInvalidatedThreadUnsafe;
- (void)startNotesSession;
- (void)startPaperSession;

@end
