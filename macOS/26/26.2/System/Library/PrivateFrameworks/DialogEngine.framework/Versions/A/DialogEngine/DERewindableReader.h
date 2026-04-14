@class NSMutableData, NSObject;
@protocol DEReader;

@interface DERewindableReader : NSObject <DEReader>

@property (retain, nonatomic) NSObject<DEReader> *reader;
@property (nonatomic) BOOL rewound;
@property (retain, nonatomic) NSMutableData *rewindData;
@property (nonatomic) unsigned long long rewindOffset;

- (id)readData;
- (void)close;
- (void).cxx_destruct;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (id)initWithReader:(id)a0;
- (BOOL)rewind;
- (void)disableRewind;
- (BOOL)isRewindable;

@end
