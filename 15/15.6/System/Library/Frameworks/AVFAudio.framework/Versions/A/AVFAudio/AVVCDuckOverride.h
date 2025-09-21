@class NSNumber;

@interface AVVCDuckOverride : NSObject

@property (retain, nonatomic) NSNumber *duckOthers;
@property (retain, nonatomic) NSNumber *duckToLevel;
@property (nonatomic) char isBlur;
@property (retain, nonatomic) NSNumber *mixWithOthers;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDuckOthers:(id)a0 duckToLevel:(id)a1 mixWithOthers:(id)a2;

@end
