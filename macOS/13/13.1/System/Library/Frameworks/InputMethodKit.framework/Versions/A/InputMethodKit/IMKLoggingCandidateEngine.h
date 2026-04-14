@class NSString;

@interface IMKLoggingCandidateEngine : IMKDecorator <IMKCandidateEngine>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)generateCandidatesFor:(id)a0 onCompletion:(id /* block */)a1;
- (id)generateCandidatesFor:(id)a0;
- (void)handleLearningHint:(int)a0 forTokenString:(id)a1 inContext:(id)a2;

@end
