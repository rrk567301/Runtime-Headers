@class NSString;

@interface MAUSBCaptureFileLocation : MAUSBObject

@property (readonly) NSString *filePath;
@property (readonly) BOOL appending;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithFilePath:(id)a0 appending:(BOOL)a1;

@end
