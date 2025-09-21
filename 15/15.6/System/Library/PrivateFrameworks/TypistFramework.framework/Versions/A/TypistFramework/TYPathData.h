@class NSArray;

@interface TYPathData : NSObject

@property (retain, nonatomic) NSArray *strokeArray;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) char isCursive;
@property (nonatomic) double perCharacterScale;

- (void).cxx_destruct;
- (id)initWithArray:(id)a0 width:(long long)a1 height:(long long)a2 isCursive:(char)a3;

@end
