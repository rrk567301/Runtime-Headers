@class IMMessagesBlastDoorInterfaceInternal;

@interface IMMessagesBlastDoorInterface : NSObject

@property (retain, nonatomic) IMMessagesBlastDoorInterfaceInternal *interface;

+ (BOOL)supportsFeature:(id)a0;

- (void)generatePreviewforAudioMessageWithfileURL:(id)a0 resultHandler:(id /* block */)a1;
- (void)generatePreviewforAttachmentWithfileURL:(id)a0 maxPixelDimension:(float)a1 scale:(float)a2 resultHandler:(id /* block */)a3;
- (void)defuseNicknameDictionary:(id)a0 withKey:(id)a1 recordTag:(id)a2 wallpaperDataTag:(id)a3 wallpaperLowResDataTag:(id)a4 wallpaperMetadataTag:(id)a5 resultHandler:(id /* block */)a6;
- (void)decontaminateTopLevelDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (void)generatePreviewForEmojiImageWithFileURL:(id)a0 frameIndex:(long long)a1 maxPixelDimension:(double)a2 resultHandler:(id /* block */)a3;
- (id)defuseTopLevelDictionary:(id)a0 context:(id)a1 error:(id *)a2;
- (id)defuseTopLevelDictionary:(id)a0 error:(id *)a1;
- (id)defuseSatelliteSMSTextMessageDictionary:(id)a0 error:(id *)a1;
- (void)generateMetadataforAttachmentWithfileURL:(id)a0 resultHandler:(id /* block */)a1;
- (void)defuseTranscriptBackgroundCommand:(id)a0 resultHandler:(id /* block */)a1;
- (void)generatePreviewforAnimatedImageWithfileURL:(id)a0 maxPixelDimension:(float)a1 index:(long long)a2 maxCount:(long long)a3 resultHandler:(id /* block */)a4;
- (id)defuseBalloonPluginPayload:(id)a0 withIdentifier:(id)a1 error:(id *)a2;
- (id)init;
- (void)generatePreviewforAttachmentWithfileURL:(id)a0 resultHandler:(id /* block */)a1;
- (id)defuseBalloonPluginPayload:(id)a0 withIdentifier:(id)a1 context:(id)a2 error:(id *)a3;
- (void)generateMoviePreviewForAttachmentWithFileURL:(id)a0 maxPixelDimension:(float)a1 minThumbnailPxSize:(struct CGSize { double x0; double x1; })a2 scale:(float)a3 frameInterval:(int)a4 resultHandler:(id /* block */)a5;
- (id)defuseLiteRelayTextMessage:(id)a0 error:(id *)a1;
- (void)defuseTranscriptBackground:(id)a0 resultHandler:(id /* block */)a1;
- (void)defuseCollaborationNoticeActionDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (void)defuseCollaborationClearNoticePayload:(id)a0 resultHandler:(id /* block */)a1;
- (id)defuseLiteTextMessage:(id)a0 error:(id *)a1;
- (void)generateMovieFramesForAttachmentWithFileURL:(id)a0 targetPixelWidth:(long long)a1 targetPixelHeight:(long long)a2 frameLimit:(long long)a3 uniformSampling:(BOOL)a4 framesPerSync:(long long)a5 appliesPreferredTrackTransform:(BOOL)a6 resultHandler:(id /* block */)a7;
- (void)defuseNicknameDictionary:(id)a0 withKey:(id)a1 recordTag:(id)a2 wallpaperDataTag:(id)a3 wallpaperLowResDataTag:(id)a4 wallpaperMetadataTag:(id)a5 processImageFields:(BOOL)a6 resultHandler:(id /* block */)a7;
- (void)defuseTopLevelDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (void)generateWorkoutPreviewForAttachmentWithFileURL:(id)a0 maxPixelDimension:(float)a1 scale:(float)a2 resultHandler:(id /* block */)a3;
- (void)generateMoviePreviewForAttachmentWithFileURL:(id)a0 maxPixelDimension:(float)a1 minThumbnailPxSize:(struct CGSize { double x0; double x1; })a2 scale:(float)a3 resultHandler:(id /* block */)a4;
- (id)generatePreviewforAttachmentWithfileURL:(id)a0 error:(id *)a1;
- (id)initWithBlastDoorInstanceType:(id)a0;
- (void)defuseBalloonPluginPayload:(id)a0 withIdentifier:(id)a1 resultHandler:(id /* block */)a2;
- (id)defuseChatBotCSS:(id)a0 error:(id *)a1;
- (void)generatePreviewForMultiFrameImageWithFileURL:(id)a0 destinationFileURL:(id)a1 maxPixelDimension:(float)a2 scale:(float)a3 maxFrameCount:(long long)a4 isSticker:(BOOL)a5 resultHandler:(id /* block */)a6;
- (void)getMetadataforAnimatedImageWithfileURL:(id)a0 maxCount:(long long)a1 resultHandler:(id /* block */)a2;
- (void)defuseNicknameDictionary:(id)a0 withKey:(id)a1 recordTag:(id)a2 wallpaperDataTag:(id)a3 wallpaperLowResDataTag:(id)a4 wallpaperMetadataTag:(id)a5 avatarRecipeDataTag:(id)a6 processImageFields:(BOOL)a7 resultHandler:(id /* block */)a8;
- (id)generateImagePreviewForFileURL:(id)a0 maxPixelDimension:(float)a1 scale:(float)a2 error:(id *)a3;
- (void)defuseNicknameDictionary:(id)a0 withKey:(id)a1 recordTag:(id)a2 resultHandler:(id /* block */)a3;
- (void)defuseSMSDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (void)defuseData:(id)a0 forPreviewType:(unsigned char)a1 resultHandler:(id /* block */)a2;
- (void)getMetadataForEmojiImageWithFileURL:(id)a0 maxStrikeCount:(long long)a1 resultHandler:(id /* block */)a2;
- (id)defuseSMSDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)defuseCollaborationNoticePayload:(id)a0 resultHandler:(id /* block */)a1;
- (id)defuseRelayGroupMutationPayload:(id)a0 error:(id *)a1;
- (id)defuseRelayReachabilityRequestPayload:(id)a0 error:(id *)a1;
- (id)defuseRelayReachabilityResponsePayload:(id)a0 error:(id *)a1;

@end
