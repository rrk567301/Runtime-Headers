@class VUIPlaybackReporterSession, NSHashTable;

@interface VUICanonicalIDSessionTracker : NSObject

@property (retain, nonatomic) NSHashTable *allSessions;
@property (weak, nonatomic) VUIPlaybackReporterSession *reportingSession;

- (void).cxx_destruct;
- (id)init;

@end
