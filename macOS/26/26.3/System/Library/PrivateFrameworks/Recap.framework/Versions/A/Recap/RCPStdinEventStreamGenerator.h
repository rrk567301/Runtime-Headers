@class NSMutableString, NSMutableArray, NSInputStream;

@interface RCPStdinEventStreamGenerator : NSObject {
    NSInputStream *_stdin;
    NSMutableArray *_commandBuffer;
    NSMutableString *_stringBuffer;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)nextEventStream;
- (BOOL)_processBuffer;

@end
