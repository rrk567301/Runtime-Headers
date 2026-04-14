@interface CVNLPTextDecodingConfiguration : NSObject

@property (copy, nonatomic) id /* block */ commitActionBlock;

+ (id /* block */)defaultCharacterCommitActionBehavior;
+ (id /* block */)defaultCommitActionBehaviorForLocale:(id)a0;
+ (id /* block */)defaultWhitespaceCommitActionBehavior;

- (void).cxx_destruct;
- (id)initWithCommitActionBehavior:(id /* block */)a0;

@end
