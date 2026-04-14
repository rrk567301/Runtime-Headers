@interface SecXPCHelper : NSObject

+ (id)cleanseErrorForXPC:(id)a0;
+ (id)safeErrorClasses;
+ (id)cleanObjectForXPC:(id)a0;
+ (id)safeCKErrorPrimitiveClasses;
+ (id)cleanDictionaryForXPC:(id)a0;
+ (id)safeErrorPrimitiveClasses;
+ (id)safeErrorCollectionClasses;
+ (id)encodedDataFromError:(id)a0;
+ (id)errorFromEncodedData:(id)a0;

@end
