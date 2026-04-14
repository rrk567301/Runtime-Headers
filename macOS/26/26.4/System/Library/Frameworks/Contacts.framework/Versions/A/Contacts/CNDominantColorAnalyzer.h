@interface CNDominantColorAnalyzer : NSObject {
    void /* unknown type, empty encoding */ scaledSize;
    void /* unknown type, empty encoding */ bytesPerPixel;
    void /* unknown type, empty encoding */ scaledData;
    void /* unknown type, empty encoding */ destBuffer;
}

- (id)init;
- (void)dealloc;
- (id)analyzeAndEncode:(id)a0 count:(long long)a1;

@end
