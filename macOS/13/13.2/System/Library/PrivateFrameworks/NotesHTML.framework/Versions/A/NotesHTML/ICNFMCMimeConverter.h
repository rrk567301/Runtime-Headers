@interface ICNFMCMimeConverter : NSObject

+ (id)messageFromPersistedMessage:(id)a0 withMessageType:(char)a1;
+ (id)headersFromPersistedMessage:(id)a0 withMessageType:(char)a1;
+ (void)updatePersistedMessage:(id)a0 fromMessage:(id)a1;

@end
