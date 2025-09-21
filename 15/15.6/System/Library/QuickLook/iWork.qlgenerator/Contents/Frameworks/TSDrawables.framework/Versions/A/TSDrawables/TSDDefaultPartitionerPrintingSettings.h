@interface TSDDefaultPartitionerPrintingSettings : NSObject

@property (readonly, nonatomic) char isPrinting;
@property (readonly, nonatomic) char isDrawingIntoPDF;
@property (readonly, nonatomic) char shouldSuppressBackgrounds;

- (char)isEqual:(id)a0;
- (id)initWithCanvas:(id)a0;

@end
