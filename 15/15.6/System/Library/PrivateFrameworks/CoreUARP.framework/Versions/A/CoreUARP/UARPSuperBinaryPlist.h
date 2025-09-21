@class NSMutableDictionary;

@interface UARPSuperBinaryPlist : NSObject {
    NSMutableDictionary *_sbDict;
}

- (void).cxx_destruct;
- (id)initWithPlist:(id)a0;
- (char)writeToURL:(id)a0;
- (char)mergePlist:(id)a0;

@end
