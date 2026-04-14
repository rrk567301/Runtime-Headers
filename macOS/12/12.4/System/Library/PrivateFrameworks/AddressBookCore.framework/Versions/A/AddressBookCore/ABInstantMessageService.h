@class NSString, NSDictionary;

@interface ABInstantMessageService : NSObject

@property (copy) NSString *serviceKey;
@property (retain) NSDictionary *actionURITemplates;

+ (id)textChatURITemplatesByServiceKey;
+ (id)audioChatURITemplatesByServiceKey;
+ (id)videoChatURITemplatesByServiceKey;
+ (id)instantMessageServiceWithKey:(id)a0;

- (void)dealloc;
- (id)initWithServiceKey:(id)a0;
- (id)actionURIForUsername:(id)a0 actionType:(id)a1;

@end
