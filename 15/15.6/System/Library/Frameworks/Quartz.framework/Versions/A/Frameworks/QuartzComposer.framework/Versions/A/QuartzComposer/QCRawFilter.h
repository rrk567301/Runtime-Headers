@class NSString, QCImagePort, NSData, CIFilter;

@interface QCRawFilter : QCPatch {
    QCImagePort *outputImage;
}

@property (retain) NSString *_filename;
@property (retain) NSData *_imageData;
@property (retain) CIFilter *_filter;

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)dealloc;
- (char)setPath:(id)a0;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (id)filterForData:(id)a0;
- (id)filterForFile:(id)a0;
- (id)filterForURL:(id)a0;
- (void)populateFilterWithPortValues;
- (void)setupPorts:(id)a0;

@end
