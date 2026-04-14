@interface SecXPCHelper : NSObject

+ (id)safeCKErrorPrimitiveClasses;
+ (id)encodedDataFromError:(id)a0;
+ (id)cleanDictionaryForXPC:(id)a0;
+ (id)safeErrorClasses;
+ (id)safeErrorPrimitiveClasses;
+ (id)safeErrorCollectionClasses;
+ (id)errorFromEncodedData:(id)a0;
+ (id)cleanObjectForXPC:(id)a0;
+ (id)cleanseErrorForXPC:(id)a0;

@end
