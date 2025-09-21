@class NSMutableData, NLNumberGenerator, NLDataProvider;

@interface NLDataEnumerator : NSObject {
    NLDataProvider *_dataProvider;
    unsigned long long _idx;
    NLNumberGenerator *_generator;
    NSMutableData *_shuffleData;
}

@property (readonly, retain) NLDataProvider *dataProvider;
@property (readonly) unsigned long long index;

- (void).cxx_destruct;
- (void)shuffle;
- (id)initWithDataProvider:(id)a0;
- (id)nextInstance;
- (id)instanceAtIndex:(unsigned long long)a0;
- (id)initWithDataProvider:(id)a0 numberGenerator:(id)a1;
- (void)rewind;
- (void)rewindAndShuffle:(char)a0;

@end
