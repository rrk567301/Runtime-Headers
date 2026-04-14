@class NFTimer, NFAssertionInternal;

@interface NFAssertionInternalWrapper : NSObject

@property (retain, nonatomic) NFTimer *releaseTimer;
@property (retain, nonatomic) NFAssertionInternal *assertion;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
