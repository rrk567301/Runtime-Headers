@class NSArray;

@interface CHPostProcessingManager : NSObject

@property (retain, nonatomic) NSArray *sequence;

- (void).cxx_destruct;
- (id)initWithSequence:(id)a0;
- (id)init;
- (id)initWithStep:(id)a0;
- (id)process:(id)a0 options:(id)a1;

@end
