@class NSMutableData, NSObject;
@protocol DEReader;

@interface DERewindableReader : NSObject <DEReader>

@property (retain, nonatomic) NSObject<DEReader> *reader;
@property (nonatomic) BOOL rewound;
@property (retain, nonatomic) NSMutableData *rewindData;
@property (nonatomic) unsigned long long rewindOffset;

- (id)readDataOfLength:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)readData;
- (id)init;
- (void)close;
- (void)dealloc;
- (id)initWithReader:(id)a0;
- (BOOL)rewind;
- (void)disableRewind;
- (BOOL)isRewindable;

@end
