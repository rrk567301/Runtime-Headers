@class NSString;

@interface AMSPaymentSheetImageAssetConfiguration : NSObject <AMSPaymentSheetAssetConfiguration>

@property (readonly, copy) NSString *filename;
@property (readonly) NSString *fileExtension;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFilename:(id)a0 size:(struct CGSize { double x0; double x1; })a1 type:(long long)a2;

@end
