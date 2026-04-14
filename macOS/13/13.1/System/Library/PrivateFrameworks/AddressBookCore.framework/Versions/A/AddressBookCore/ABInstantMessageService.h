@class NSString, NSDictionary;

@interface ABInstantMessageService : NSObject

@property (copy) NSString *serviceKey;
@property (retain) NSDictionary *actionURITemplates;

+ (id)instantMessageServiceWithKey:(id)a0;
+ (id)textChatURITemplatesByServiceKey;
+ (id)audioChatURITemplatesByServiceKey;
+ (id)videoChatURITemplatesByServiceKey;

- (void)dealloc;
- (id)initWithServiceKey:(id)a0;
- (id)actionURIForUsername:(id)a0 actionType:(id)a1;

@end
