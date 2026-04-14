@class NSMutableString, NSMutableArray, NSInputStream;

@interface RCPStdinEventStreamGenerator : NSObject {
    NSInputStream *_stdin;
    NSMutableArray *_commandBuffer;
    NSMutableString *_stringBuffer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)nextEventStream;
- (BOOL)_processBuffer;

@end
