@interface DICommonAttach : NSObject

+ (char)diskImageAttach:(id)a0 BSDName:(id *)a1 error:(id *)a2;
+ (char)diskImageAttach:(id)a0 readOnly:(char)a1 autoMount:(char)a2 BSDName:(id *)a3 error:(id *)a4;
+ (char)DI1_attachWithDictionary:(id)a0 BSDName:(id *)a1 error:(id *)a2;
+ (char)DI2_attachWithParams:(id)a0 BSDName:(id *)a1 error:(id *)a2;
+ (char)defaultDiskImageAttach:(id)a0 BSDName:(id *)a1 error:(id *)a2;
+ (char)failWithDI1errorCode:(int)a0 error:(id *)a1;

@end
