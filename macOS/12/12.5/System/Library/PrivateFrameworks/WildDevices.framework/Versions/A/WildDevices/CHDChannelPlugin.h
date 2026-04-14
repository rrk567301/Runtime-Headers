@interface CHDChannelPlugin : NSObject

- (id)init;
- (id)getPluginVersion;
- (BOOL)handlesChannel:(unsigned short)a0;
- (Class)classForChannel:(unsigned short)a0;

@end
