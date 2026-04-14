@class NSArray;

@interface ABGravatarImageTask : CNTask {
    NSArray *_emailAddresses;
}

- (long long)imageSize;
- (id)run:(id *)a0;
- (void)dealloc;
- (id)filenameForEmailAddress:(id)a0;
- (id)hashForEmailAddress:(id)a0;
- (id)initWithEmailAddresses:(id)a0;
- (id)urlForEmailAddress:(id)a0;

@end
