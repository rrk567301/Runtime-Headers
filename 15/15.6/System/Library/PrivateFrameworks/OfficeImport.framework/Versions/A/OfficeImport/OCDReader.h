@class NSString, NSData, NSError;
@protocol OCDReaderDelegate, TCCancelDelegate;

@interface OCDReader : NSObject

@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSError *startError;
@property (retain, nonatomic) id<TCCancelDelegate> cancelDelegate;
@property (weak, nonatomic) id<OCDReaderDelegate> delegate;
@property (nonatomic) char isThumbnail;

- (void).cxx_destruct;
- (char)start;
- (id)read;
- (id)initWithCancelDelegate:(id)a0;
- (BOOL)isBinaryReader;
- (void)setStartErrorMessageFromException:(id)a0;
- (char)verifyFileFormat;

@end
