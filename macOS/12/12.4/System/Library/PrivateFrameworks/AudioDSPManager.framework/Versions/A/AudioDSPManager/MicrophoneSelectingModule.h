@class NSArray, NSString, MicrophoneSelectingModuleUtil;
@protocol AVAudioMicrophoneConfiguration;

@interface MicrophoneSelectingModule : DSPModule <RPBItemDelegate, AVAudioMicrophoneSelecting> {
    MicrophoneSelectingModuleUtil *_databaseUtil;
}

@property (readonly, nonatomic) NSArray *availableConfigurations;
@property (readonly, nonatomic) id<AVAudioMicrophoneConfiguration> selectedConfiguration;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)applyConfiguration:(id)a0;
- (BOOL)setConfiguration:(id)a0 error:(id *)a1;
- (id)moduleDescription;
- (BOOL)isBeamFormingConfig:(id)a0;
- (BOOL)enable:(BOOL)a0 error:(id *)a1;
- (id)initWithDatabaseUtil:(id)a0 scope:(unsigned long long)a1 ioControllerID:(unsigned long long)a2 ioStreamIndex:(struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; })a3 moduleManager:(id)a4;
- (id)initWithSimulatedModule:(id)a0 scope:(unsigned long long)a1 ioControllerID:(unsigned long long)a2 ioStreamIndex:(struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; })a3 moduleManager:(id)a4;
- (void)getRemoteProcessingBlockProperty:(id *)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;
- (void)setRemoteProcessingBlockProperty:(id)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;

@end
