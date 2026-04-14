@class NSArray, NSMutableDictionary, NSData;

@interface FTTTSPhonemeSequence : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TTSPhonemeSequence { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *word_phonemes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TTSPhonemeSequence { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::TTSPhonemeSequence> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TTSPhonemeSequence { unsigned char x0[1]; } *)a1;

@end
