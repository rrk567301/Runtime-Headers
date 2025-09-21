@class NSString, AFVoiceInfo;

@interface SUICVoiceSelectionViewModelVoice : NSObject <NSCopying>

@property (readonly, copy, nonatomic) AFVoiceInfo *voiceInfo;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) struct CGColor { } *associatedCGColor;
@property (readonly, nonatomic) char isCurrentSiriVoice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithVoice:(id)a0 isCurrentSiriVoice:(char)a1;

@end
