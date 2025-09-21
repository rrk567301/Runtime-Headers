@interface SecXPCHelper : NSObject

+ (id)safeErrorPrimitiveClasses;
+ (id)safeCKErrorPrimitiveClasses;
+ (id)safeErrorClasses;
+ (id)safeErrorCollectionClasses;
+ (id)errorFromEncodedData:(id)a0;
+ (id)cleanObjectForXPC:(id)a0;
+ (id)encodedDataFromError:(id)a0;
+ (id)cleanseErrorForXPC:(id)a0;
+ (id)cleanDictionaryForXPC:(id)a0;

@end
