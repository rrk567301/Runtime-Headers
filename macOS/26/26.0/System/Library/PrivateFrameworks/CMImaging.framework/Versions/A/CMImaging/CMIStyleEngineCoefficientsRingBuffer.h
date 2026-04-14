@class NSMutableArray;

@interface CMIStyleEngineCoefficientsRingBuffer : NSObject {
    int _ringBufferSize;
    int _inputIndex;
    NSMutableArray *_coefficientsDataArray;
}

- (int)add:(id)a0;
- (void)releaseResources;
- (void)reset;
- (id)peek;
- (id)initWithCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)getFramesDataWindowFrom:(double)a0 to:(double)a1 shouldRemoveOldData:(BOOL)a2;
- (id)getFramesDataWindowFrom:(double)a0 to:(double)a1 shouldRemoveOldData:(BOOL)a2 forStyle:(id)a3;
- (int)getNumberOfElements;

@end
