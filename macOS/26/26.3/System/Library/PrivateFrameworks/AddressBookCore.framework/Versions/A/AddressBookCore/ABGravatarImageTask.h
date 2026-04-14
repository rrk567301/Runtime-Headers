@class NSArray;

@interface ABGravatarImageTask : CNTask {
    NSArray *_emailAddresses;
}

- (id)run:(id *)a0;
- (long long)imageSize;
- (void)dealloc;
- (id)filenameForEmailAddress:(id)a0;
- (id)hashForEmailAddress:(id)a0;
- (id)initWithEmailAddresses:(id)a0;
- (id)urlForEmailAddress:(id)a0;

@end
