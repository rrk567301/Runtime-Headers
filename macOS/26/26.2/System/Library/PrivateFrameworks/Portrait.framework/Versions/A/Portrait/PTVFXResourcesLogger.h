@class NSString;

@interface PTVFXResourcesLogger : NSObject {
    NSString *_name;
    int _index;
    BOOL _verboseLogging;
}

- (id /* block */)progressHandler;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 index:(int)a1;

@end
