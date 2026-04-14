@class NSData, NSMutableDictionary;

@interface QSSAudioPacket : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AudioPacket { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSData *audio_bytes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AudioPacket { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AudioPacket { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::AudioPacket> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (void)audio_bytes:(id /* block */)a0;

@end
