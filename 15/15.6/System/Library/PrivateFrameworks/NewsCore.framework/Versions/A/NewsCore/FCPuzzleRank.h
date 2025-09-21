@class NSString;

@interface FCPuzzleRank : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) char defaultRank;
@property (readonly, nonatomic) char isProdigyLevel;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 index:(long long)a1;

@end
