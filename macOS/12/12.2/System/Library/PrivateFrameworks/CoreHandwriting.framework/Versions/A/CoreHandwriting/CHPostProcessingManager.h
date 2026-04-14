@class NSArray;

@interface CHPostProcessingManager : NSObject

@property (retain, nonatomic) NSArray *sequence;

- (void)dealloc;
- (id)init;
- (id)process:(id)a0;
- (id)initWithStep:(id)a0;
- (id)initWithSequence:(id)a0;

@end
