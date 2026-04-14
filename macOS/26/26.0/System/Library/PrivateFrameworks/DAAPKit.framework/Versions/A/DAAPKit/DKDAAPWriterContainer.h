@class NSMutableData;

@interface DKDAAPWriterContainer : NSObject

@property (readonly, nonatomic) unsigned int code;
@property (retain, nonatomic) NSMutableData *childData;

- (id)initWithCode:(unsigned int)a0;
- (void).cxx_destruct;
- (id)formattedOutputData;

@end
