@class NSString;

@interface IKInterfaceBuilderImage : NSObject {
    NSString *_path;
    NSString *_title;
    NSString *_subtitle;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)path;
- (void)setPath:(id)a0;
- (id)imageRepresentation;
- (id)imageUID;
- (id)imageRepresentationType;
- (id)imageTitle;
- (id)imageSubtitle;

@end
