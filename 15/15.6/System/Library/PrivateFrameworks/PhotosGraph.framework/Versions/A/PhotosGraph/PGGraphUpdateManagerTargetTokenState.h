@class PHPersistentChangeToken;

@interface PGGraphUpdateManagerTargetTokenState : NSObject

@property (readonly, nonatomic) PHPersistentChangeToken *changeToken;
@property (nonatomic) char encounteredTargetToken;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPersistentChangeToken:(id)a0;

@end
