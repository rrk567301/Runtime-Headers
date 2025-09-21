@class NSString, IMHandle;

@interface IMRichActionFooterChatItem : IMTranscriptChatItem {
    IMHandle *_handle;
}

@property (readonly, nonatomic) NSString *extensionName;

- (id)handle;
- (void).cxx_destruct;
- (BOOL)isFromMe;
- (id)_initWithItem:(id)a0;

@end
