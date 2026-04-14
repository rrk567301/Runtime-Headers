@interface MsgDefinitionFilter : MsgImageFilter

+ (id)filterName;
+ (id)kernelArray;
+ (id)definitionOn:(id)a0 using:(id)a1 withAmount:(float)a2;
+ (id)gaussianBlur:(float)a0 to:(id)a1;
+ (id)meaningOn:(id)a0 withRadius:(float)a1 amount:(float)a2;

@end
