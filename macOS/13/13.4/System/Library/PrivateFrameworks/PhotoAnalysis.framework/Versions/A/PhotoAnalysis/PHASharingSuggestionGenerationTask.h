@class NSDictionary;

@interface PHASharingSuggestionGenerationTask : PHASuggestionGenerationTask {
    NSDictionary *_suggestionOptionsDictionary;
}

- (id)name;
- (void).cxx_destruct;
- (void)setSuggestionOptionsDictionary:(id)a0;
- (BOOL)currentPlatformIsSupported;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 reply:(id /* block */)a2;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)suggestionOptionsDictionary;

@end
