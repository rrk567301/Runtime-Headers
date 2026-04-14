@class NSMutableData;

@interface AXHAPacket : NSObject {
    unsigned long long _totalLength;
}

@property (retain, nonatomic) NSMutableData *data;

+ (id)packetDataWithPayload:(id)a0;
+ (struct { short x0; int x1; })headerFromData:(id)a0;
+ (id)packetWithHeader:(struct { short x0; int x1; })a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)appendData:(id)a0;
- (id)dataPayload;
- (id)initWithHeader:(struct { short x0; int x1; })a0;
- (unsigned long long)missingLength;
- (id)objectPayload;

@end
