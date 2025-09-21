@interface IMInternalPayloadUtilities : NSObject

+ (char)writeData:(id)a0 toURL:(id)a1;
+ (char)writeDataPayloadToDisk:(id)a0 fileName:(id)a1;
+ (char)writeMessagePayloadToDisk:(id)a0 fileName:(id)a1;
+ (id)writeMessagePayloadToTemporaryDirectory:(id)a0 fileName:(id)a1;
+ (char)writePayload:(id)a0 toURL:(id)a1;

@end
