@interface HMDRemoteMessageSerialization : HMFObject

+ (id)dictionaryForMessage:(id)a0 error:(id *)a1;
+ (id)remoteMessageWithDictionary:(id)a0 error:(id *)a1;
+ (id)logSessionContextFromData:(id)a0;

@end
