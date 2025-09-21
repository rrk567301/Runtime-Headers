@class NSString;

@interface MAUSBCaptureFileLocation : MAUSBObject

@property (readonly) NSString *filePath;
@property (readonly) char appending;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithFilePath:(id)a0 appending:(char)a1;

@end
