@class NSFileHandle;

@interface MIBUEncodedFileInfo : NSObject

@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) unsigned int fileNumber;
@property (nonatomic) unsigned char sourceBlockNumber;

- (void).cxx_destruct;

@end
