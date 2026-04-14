@class NSMutableData, NSObject;
@protocol DEReader;

@interface DERewindableReader : NSObject <DEReader>

@property (retain, nonatomic) NSObject<DEReader> *reader;
@property (nonatomic) BOOL rewound;
@property (retain, nonatomic) NSMutableData *rewindData;
@property (nonatomic) unsigned long long rewindOffset;

- (id)readData;
- (void)close;
- (id)readDataOfLength:(unsigned long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)initWithReader:(id)a0;
- (BOOL)rewind;
- (void)disableRewind;
- (BOOL)isRewindable;

@end
