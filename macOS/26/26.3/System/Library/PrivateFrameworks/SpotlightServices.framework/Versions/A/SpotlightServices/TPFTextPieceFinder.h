@class NSString;

@interface TPFTextPieceFinder : NSObject

@property (readonly, copy, nonatomic) NSString *originalFullText;
@property (readonly, copy, nonatomic) NSString *searchableFullText;
@property (readonly, nonatomic) unsigned long long maxLength;
@property (readonly, nonatomic) unsigned long long maxNumCandidates;

- (void).cxx_destruct;
- (id)createPiecesWithTargets:(id)a0;
- (id)findLocationsOfTarget:(id)a0;
- (id)initWithFullText:(id)a0 maxLength:(unsigned long long)a1 maxNumCandidates:(unsigned long long)a2;

@end
