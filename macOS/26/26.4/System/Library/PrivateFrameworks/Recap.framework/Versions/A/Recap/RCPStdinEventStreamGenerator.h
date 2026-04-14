@class NSMutableString, NSMutableArray, NSInputStream;

@interface RCPStdinEventStreamGenerator : NSObject {
    NSInputStream *_stdin;
    NSMutableArray *_commandBuffer;
    NSMutableString *_stringBuffer;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)nextEventStream;
- (BOOL)_processBuffer;

@end
