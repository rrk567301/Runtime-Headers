@interface SecXPCHelper : NSObject

+ (id)safeErrorClasses;
+ (id)safeErrorPrimitiveClasses;
+ (id)safeCKErrorPrimitiveClasses;
+ (id)safeErrorCollectionClasses;
+ (id)cleanObjectForXPC:(id)a0;
+ (id)cleanDictionaryForXPC:(id)a0;
+ (id)cleanseErrorForXPC:(id)a0;
+ (id)errorFromEncodedData:(id)a0;
+ (id)encodedDataFromError:(id)a0;

@end
