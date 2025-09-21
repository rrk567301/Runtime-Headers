@class DERewindableReader, NSMutableData, NSData;

@interface DEMultipartReader : NSObject <DEReader>

@property (retain, nonatomic) DERewindableReader *reader;
@property (retain, nonatomic) NSMutableData *searchBuffer;
@property (retain, nonatomic) NSData *nextPartData;
@property (nonatomic) BOOL endOfPart;
@property (nonatomic) BOOL endOfMessage;
@property (retain, nonatomic) NSData *endOfPartData;
@property (retain, nonatomic) NSData *endOfMessageData;
@property (nonatomic) unsigned long long maxEndSize;

+ (id)getEndOfMessageData;
+ (id)getEndOfPartData;

- (void)dealloc;
- (id)init;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)readData;
- (void)close;
- (void).cxx_destruct;
- (id)initWithReader:(id)a0;
- (unsigned long long)getAvailableLength;
- (id)internalReadDataOfLength:(unsigned long long)a0;
- (BOOL)nextPart;
- (void)searchForEnd;

@end
