@class NSArray, NSString, NSURL, NSData;
@protocol NSSoundDelegate, NSSoundEngine;

@interface NSSound : NSObject <NSSoundEngineDelegate, NSCopying, NSSecureCoding, NSPasteboardReading, NSPasteboardWriting> {
    id<NSSoundDelegate> _delegate;
    NSString *_name;
    NSURL *_url;
    NSData *_data;
    id<NSSoundEngine> _engine;
    NSString *_deviceUID;
    NSArray *_channelMapping;
    unsigned char _shouldLoop : 1;
    unsigned char _isPlaying : 1;
    unsigned char _delegateWantsComplete : 1;
    unsigned char _skipRegisterSoundName : 1;
    unsigned char _archivingBehavior : 2;
    unsigned int _systemSoundID;
    float _volume;
}

@property (class, readonly, copy) NSArray *soundUnfilteredTypes;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, getter=isPlaying) BOOL playing;
@property (weak) id<NSSoundDelegate> delegate;
@property (readonly) double duration;
@property float volume;
@property double currentTime;
@property BOOL loops;
@property (copy) NSString *playbackDeviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)readableTypesForPasteboard:(id)a0;
+ (unsigned long long)readingOptionsForType:(id)a0 pasteboard:(id)a1;
+ (BOOL)canInitWithPasteboard:(id)a0;
+ (id)soundNamed:(id)a0;
+ (id)soundUnfilteredFileTypes;
+ (id)_searchForSoundNamed:(id)a0;
+ (id)soundUnfilteredPasteboardTypes;
+ (void)_forceSoundEngine:(long long)a0;
+ (BOOL)playSound:(id)a0 flags:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (BOOL)_areUISoundEffectsEnabled;
+ (void)_setAlertType:(unsigned long long)a0;
+ (unsigned long long)_alertType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPasteboard:(id)a0;
- (void).cxx_destruct;
- (BOOL)resume;
- (BOOL)setName:(id)a0;
- (id)_url;
- (id)url;
- (BOOL)pause;
- (BOOL)stop;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (BOOL)play;
- (id)writableTypesForPasteboard:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (void)writeToPasteboard:(id)a0;
- (id)initWithContentsOfURL:(id)a0 byReference:(BOOL)a1;
- (id)channelMapping;
- (BOOL)_isValidDecodedChannelMap:(id)a0 error:(id *)a1;
- (void)_setPlayingAndRetainIfUnset;
- (BOOL)_unsetPlayingReturningIfWasSet;
- (unsigned int)_systemSoundIDCreateIfNecessary:(BOOL)a0;
- (void)soundEngineDidFinishPlaying:(id)a0;
- (id)URLForSoundEngine:(id)a0;
- (id)dataForSoundEngine:(id)a0;
- (id)deviceUIDForSoundEngine:(id)a0;
- (id)channelMappingForSoundEngine:(id)a0;
- (double)volumeForSoundEngine:(id)a0;
- (BOOL)shouldLoopForSoundEngine:(id)a0;
- (id)initWithContentsOfFile:(id)a0 byReference:(BOOL)a1;
- (void)_setRegistersName:(BOOL)a0;
- (BOOL)_registersName;
- (void)setChannelMapping:(id)a0;

@end
