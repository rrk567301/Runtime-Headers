@class NSString;

@interface IKInterfaceBuilderImage : NSObject {
    NSString *_path;
    NSString *_title;
    NSString *_subtitle;
}

- (void)setPath:(id)a0;
- (id)path;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)imageRepresentation;
- (void)dealloc;
- (id)imageRepresentationType;
- (id)imageTitle;
- (id)imageUID;
- (id)imageSubtitle;

@end
