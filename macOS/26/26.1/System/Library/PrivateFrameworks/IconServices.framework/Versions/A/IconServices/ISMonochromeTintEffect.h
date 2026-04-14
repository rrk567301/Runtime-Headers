@class IFColor, NSString;

@interface ISMonochromeTintEffect : NSObject <ISEffect>

@property (retain) IFColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithColor:(id)a0;
- (void).cxx_destruct;
- (id)filterWithBackgroundImage:(id)a0 inputImage:(id)a1;

@end
