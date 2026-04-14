@interface ATAudioSessionUtils : NSObject

+ (id)modes;
+ (unsigned long long)getCategoryOptionFromPropertyID:(unsigned int)a0;
+ (id)getAVASProperty:(unsigned int)a0;
+ (unsigned int)getAudioSessionProperty:(id)a0;
+ (id)getAVASCategory:(unsigned int)a0;
+ (unsigned int)getAudioSessionCategory:(id)a0;
+ (id)getAVASMode:(unsigned int)a0;
+ (unsigned int)getAudioSessionMode:(id)a0;
+ (struct __CFString { } *)getAudioSessionPortType:(id)a0 forInput:(BOOL)a1;
+ (id)getMappedObjectOf:(id)a0 inside:(id)a1 ofType:(int)a2;
+ (id)KVOProperties;
+ (id)categories;
+ (id)inputPortTypes;
+ (id)outputPortTypes;
+ (id)getRouteDescriptionFromAVASRouteDescription:(id)a0;
+ (id)getRouteStringFromAVASRouteDescription:(id)a0;
+ (id)getPorts:(id)a0 forInput:(BOOL)a1;
+ (id)getPort:(id)a0 forInput:(BOOL)a1;

@end
