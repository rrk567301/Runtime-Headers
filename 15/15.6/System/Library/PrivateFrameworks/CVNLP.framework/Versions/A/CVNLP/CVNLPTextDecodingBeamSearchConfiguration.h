@interface CVNLPTextDecodingBeamSearchConfiguration : CVNLPTextDecodingConfiguration

@property (nonatomic) unsigned long long beamWidth;
@property (nonatomic) unsigned long long pathCount;
@property (nonatomic) char shouldOptimizeAlignment;
@property (nonatomic) char pruneProblematicMixedScriptWordPaths;
@property (nonatomic) char shouldApplyWordLMToLastWord;
@property (readonly, nonatomic) id /* block */ scoringFunction;

- (id)initWithCommitActionBehavior:(id /* block */)a0 beamWidth:(unsigned long long)a1 pathCount:(unsigned long long)a2 shouldOptimizeAlignment:(char)a3;
- (id)initWithCommitActionBehavior:(id /* block */)a0 beamWidth:(unsigned long long)a1 pathCount:(unsigned long long)a2 shouldOptimizeAlignment:(char)a3 pruneProblematicMixedScriptWordPaths:(char)a4;
- (id)initWithCommitActionBehavior:(id /* block */)a0 scoringFunction:(id /* block */)a1 beamWidth:(unsigned long long)a2 pathCount:(unsigned long long)a3;
- (id)initWithCommitActionBehavior:(id /* block */)a0 scoringFunction:(id /* block */)a1 beamWidth:(unsigned long long)a2 pathCount:(unsigned long long)a3 shouldOptimizeAlignment:(char)a4;
- (id)initWithCommitActionBehavior:(id /* block */)a0 scoringFunction:(id /* block */)a1 beamWidth:(unsigned long long)a2 pathCount:(unsigned long long)a3 shouldOptimizeAlignment:(char)a4 pruneProblematicMixedScriptWordPaths:(char)a5;
- (id)initWithCommitActionBehavior:(id /* block */)a0 scoringFunction:(id /* block */)a1 beamWidth:(unsigned long long)a2 pathCount:(unsigned long long)a3 shouldOptimizeAlignment:(char)a4 pruneProblematicMixedScriptWordPaths:(char)a5 shouldApplyWordLMToLastWord:(char)a6;

@end
