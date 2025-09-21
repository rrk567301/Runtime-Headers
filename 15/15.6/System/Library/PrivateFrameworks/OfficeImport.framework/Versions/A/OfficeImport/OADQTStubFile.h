@interface OADQTStubFile : OADEmbeddedMediaFile {
    char isAudioOnly;
}

- (id)description;
- (char)isAudioOnly;
- (void)setIsAudioOnly:(char)a0;

@end
