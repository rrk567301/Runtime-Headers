@interface HMDRemoteMessageSerialization : HMFObject

+ (id)dictionaryForMessage:(id)a0 error:(id *)a1;
+ (id)dictionaryForMessage:(id)a0 isHH2Payload:(BOOL)a1 error:(id *)a2;
+ (id)logSessionContextFromData:(id)a0;
+ (id)remoteMessageWithDictionary:(id)a0 error:(id *)a1;
+ (id)remoteMessageWithDictionary:(id)a0 isHH2Payload:(BOOL)a1 error:(id *)a2;

@end
