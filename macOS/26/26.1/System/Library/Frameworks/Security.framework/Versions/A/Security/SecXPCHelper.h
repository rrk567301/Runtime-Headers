@interface SecXPCHelper : NSObject

+ (id)safeCKErrorPrimitiveClasses;
+ (id)cleanObjectForXPC:(id)a0;
+ (id)cleanDictionaryForXPC:(id)a0;
+ (id)encodedDataFromError:(id)a0;
+ (id)errorFromEncodedData:(id)a0;
+ (id)safeErrorCollectionClasses;
+ (id)safeErrorPrimitiveClasses;
+ (id)safeErrorClasses;
+ (id)cleanseErrorForXPC:(id)a0;

@end
