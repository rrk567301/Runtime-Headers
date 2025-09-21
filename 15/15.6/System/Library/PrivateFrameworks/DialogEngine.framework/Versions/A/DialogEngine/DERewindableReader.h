@class NSMutableData, NSObject;
@protocol DEReader;

@interface DERewindableReader : NSObject <DEReader>

@property (retain, nonatomic) NSObject<DEReader> *reader;
@property (nonatomic) char rewound;
@property (retain, nonatomic) NSMutableData *rewindData;
@property (nonatomic) unsigned long long rewindOffset;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)readData;
- (char)rewind;
- (id)initWithReader:(id)a0;
- (void)disableRewind;
- (char)isRewindable;

@end
