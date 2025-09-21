@class NSArray, IMTranscriptPluginChatItem, NSDictionary, NSError, IMPluginPayload;

@interface IMPollHelper : NSObject

- (id)init;
- (void)pollOptionsFromChatItem:(IMTranscriptPluginChatItem *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)pollOptionsFromPluginPayload:(IMPluginPayload *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)pollResponseFromChatItem:(IMTranscriptPluginChatItem *)a0 completionHandler:(void (^)(NSDictionary *, NSError *))a1;
- (long long)synchronousPollOptionCountFromChatItem:(id)a0;

@end
