@class NSMutableData;

@interface SidecarMutableItem : SidecarItem {
    NSMutableData *_mutableData;
    unsigned long long _capacity;
    unsigned char _complete : 1;
}

@property (readonly, getter=isComplete) BOOL complete;

- (id)data;
- (void).cxx_destruct;
- (BOOL)appendData:(id)a0;
- (id)initWithType:(id)a0 capacity:(unsigned long long)a1;

@end
