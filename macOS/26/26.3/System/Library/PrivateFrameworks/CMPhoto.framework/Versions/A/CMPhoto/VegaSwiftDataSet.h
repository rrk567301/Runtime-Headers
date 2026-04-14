@interface VegaSwiftDataSet : NSObject {
    void /* unknown type, empty encoding */ dataSet;
    void /* unknown type, empty encoding */ fileMeta;
}

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)allElements;
- (BOOL)isLittleEndian;
- (id)elementWithTag:(unsigned int)a0;
- (id)addPixelDataWithFrames:(id)a0 error:(id *)a1;
- (id)createElementByName:(id)a0 error:(id *)a1;
- (id)createElementWithTag:(unsigned int)a0 vr:(id)a1 creatorName:(id)a2 error:(id *)a3;
- (id)createSequenceElementWithTag:(unsigned int)a0 error:(id *)a1;
- (id)elementWithTag:(unsigned int)a0 mask:(unsigned int)a1;
- (id)getElementByName:(id)a0 error:(id *)a1;
- (id)getPixelDataFragmentsWithNumFrames:(int)a0 error:(id *)a1;
- (id)serializeToDataAndReturnError:(id *)a0;
- (id)transferSyntaxUID;

@end
