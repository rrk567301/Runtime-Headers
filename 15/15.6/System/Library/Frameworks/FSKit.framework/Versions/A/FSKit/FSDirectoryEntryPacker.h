@class FSMutableFileDataBuffer;

@interface FSDirectoryEntryPacker : NSObject {
    void *_lastEntry;
}

@property (readonly) long long bytesPacked;
@property (readonly) char withAttributes;
@property (readonly) char outOfSpace;
@property long long bytesPacked;
@property (retain) FSMutableFileDataBuffer *buffer;
@property char outOfSpace;
@property char withAttributes;

- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0 withAttributes:(char)a1;
- (char)packEntryWithName:(id)a0 itemType:(long long)a1 itemID:(unsigned long long)a2 nextCookie:(unsigned long long)a3 attributes:(id)a4;
- (void)setLastEntryAsEOF;

@end
