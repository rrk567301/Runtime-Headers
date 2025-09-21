@class NSArray;

@interface IMKeyTransparencyStatusChangedChatItem : IMTranscriptChatItem

@property (readonly, copy, nonatomic) NSArray *affectedHandles;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, getter=isGroupChat) char groupChat;

- (void).cxx_destruct;
- (id)_initWithHandles:(id)a0 status:(unsigned long long)a1 isGroupChat:(char)a2;

@end
