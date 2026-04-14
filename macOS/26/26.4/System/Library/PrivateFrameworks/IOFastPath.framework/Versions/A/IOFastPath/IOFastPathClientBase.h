@class IOFastPathDescriptor;

@interface IOFastPathClientBase : NSObject {
    IOFastPathDescriptor *descriptor;
}

- (unsigned long long)_cfTypeID;
- (int)open;
- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (int)close;
- (int)readNextSample:(id)a0;
- (int)readCurrentSample:(id)a0;
- (int)readPreviousSample:(id)a0;
- (id)copyDescriptor;
- (id)createSample;
- (int)enqueueSample:(id)a0;
- (unsigned long long)getSampleSize;
- (id)getSupportedFields;
- (int)readLatestSample:(id)a0;
- (BOOL)supportsField:(unsigned int)a0 ofType:(int)a1;

@end
