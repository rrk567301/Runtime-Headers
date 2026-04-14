@interface CHDChannelPlugin : NSObject

- (id)init;
- (BOOL)handlesChannel:(unsigned short)a0;
- (Class)classForChannel:(unsigned short)a0;
- (id)getPluginVersion;

@end
