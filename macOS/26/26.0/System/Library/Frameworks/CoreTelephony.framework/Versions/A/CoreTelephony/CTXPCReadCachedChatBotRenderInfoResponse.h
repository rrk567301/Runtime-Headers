@class CTLazuliChatBotRenderInformationData;

@interface CTXPCReadCachedChatBotRenderInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTLazuliChatBotRenderInformationData *info;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithInfo:(id)a0;

@end
