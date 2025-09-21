@class NSString;

@interface STMutableVoiceControlStatusDomainData : STVoiceControlStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (nonatomic, getter=isVoiceControlActive) char voiceControlActive;
@property (nonatomic) unsigned long long listeningState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)applyDiff:(id)a0;
- (void)setListeningState:(unsigned long long)a0;
- (void)setVoiceControlActive:(char)a0;

@end
