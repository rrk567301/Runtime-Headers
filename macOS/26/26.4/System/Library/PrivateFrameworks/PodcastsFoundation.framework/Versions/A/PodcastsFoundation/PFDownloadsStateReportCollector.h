@interface PFDownloadsStateReportCollector : NSObject {
    void /* unknown type, empty encoding */ checker;
}

- (void).cxx_destruct;
- (id)init;
- (void)generateReportWithCompletionHandler:(id /* block */)a0;
- (id)initWithManagedObjectContext:(id)a0 episodePropertiesToReport:(id)a1 showPropertiesToReport:(id)a2 allEpisodes:(BOOL)a3;

@end
