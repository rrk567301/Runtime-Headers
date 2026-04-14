@interface SecXPCHelper : NSObject

+ (id)cleanDictionaryForXPC:(id)a0;
+ (id)cleanObjectForXPC:(id)a0;
+ (id)cleanseErrorForXPC:(id)a0;
+ (id)safeErrorPrimitiveClasses;
+ (id)safeErrorClasses;
+ (id)encodedDataFromError:(id)a0;
+ (id)errorFromEncodedData:(id)a0;
+ (id)safeErrorCollectionClasses;
+ (id)safeCKErrorPrimitiveClasses;

@end
