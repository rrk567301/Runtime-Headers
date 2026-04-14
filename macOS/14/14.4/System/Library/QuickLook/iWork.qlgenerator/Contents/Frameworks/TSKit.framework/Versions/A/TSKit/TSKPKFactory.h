@class NSMutableDictionary;

@interface TSKPKFactory : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *recognizers;

+ (void)initialize;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1 weight:(double)a2;
+ (BOOL)pencilKitAvailable;
+ (id)imageRendererWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (id)inkIdentifierForToolType:(long long)a0;
+ (id)recognizerWithType:(int)a0 mode:(int)a1;
+ (long long)toolTypeForInkIdentifier:(id)a0;

@end
