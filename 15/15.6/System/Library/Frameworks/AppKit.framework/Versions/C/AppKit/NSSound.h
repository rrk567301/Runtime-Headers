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
@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSURL *_url;
@property (readonly) unsigned int _archivingBehavior;
@property (readonly, copy) NSString *name;
@property (readonly, getter=isPlaying) char playing;
@property (weak) id<NSSoundDelegate> delegate;
@property (readonly) double duration;
@property float volume;
@property double currentTime;
@property char loops;
@property (copy) NSString *playbackDeviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (unsigned long long)_alertType;
+ (char)_areUISoundEffectsEnabled;
+ (void)_forceSoundEngine:(long long)a0;
+ (id)_searchForSoundNamed:(id)a0;
+ (void)_setAlertType:(unsigned long long)a0;
+ (char)canInitWithPasteboard:(id)a0;
+ (char)playSound:(id)a0 flags:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (id)readableTypesForPasteboard:(id)a0;
+ (unsigned long long)readingOptionsForType:(id)a0 pasteboard:(id)a1;
+ (id)soundNamed:(id)a0;
+ (id)soundUnfilteredFileTypes;
+ (id)soundUnfilteredPasteboardTypes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithPasteboard:(id)a0;
- (char)resume;
- (char)setName:(id)a0;
- (id)url;
- (char)pause;
- (char)stop;
- (id)URLForSoundEngine:(id)a0;
- (char)_isValidDecodedChannelMap:(id)a0 error:(id *)a1;
- (char)_registersName;
- (void)_setPlayingAndRetainIfUnset;
- (void)_setRegistersName:(char)a0;
- (unsigned int)_systemSoundIDCreateIfNecessary:(char)a0;
- (char)_unsetPlayingReturningIfWasSet;
- (id)channelMapping;
- (id)channelMappingForSoundEngine:(id)a0;
- (id)dataForSoundEngine:(id)a0;
- (id)deviceUIDForSoundEngine:(id)a0;
- (id)initWithContentsOfFile:(id)a0 byReference:(char)a1;
- (id)initWithContentsOfURL:(id)a0 byReference:(char)a1;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (id)pasteboardPropertyListForType:(id)a0;
- (char)play;
- (void)setChannelMapping:(id)a0;
- (char)shouldLoopForSoundEngine:(id)a0;
- (void)soundEngineDidFinishPlaying:(id)a0;
- (double)volumeForSoundEngine:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (void)writeToPasteboard:(id)a0;

@end
