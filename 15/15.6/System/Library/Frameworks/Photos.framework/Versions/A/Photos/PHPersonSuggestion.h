@class PHFace, PHPerson;

@interface PHPersonSuggestion : NSObject

@property (readonly, nonatomic) PHFace *keyFace;
@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) char confirmed;
@property (readonly, nonatomic) double similarityScore;

- (void).cxx_destruct;
- (id)initWithKeyFace:(id)a0 person:(id)a1 confirmed:(char)a2 similarityScore:(double)a3;

@end
