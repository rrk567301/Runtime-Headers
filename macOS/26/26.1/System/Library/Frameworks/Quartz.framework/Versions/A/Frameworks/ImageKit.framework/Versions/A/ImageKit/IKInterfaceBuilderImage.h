@class NSString;

@interface IKInterfaceBuilderImage : NSObject {
    NSString *_path;
    NSString *_title;
    NSString *_subtitle;
}

- (id)imageRepresentation;
- (void)setPath:(id)a0;
- (unsigned long long)hash;
- (id)path;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)imageRepresentationType;
- (id)imageTitle;
- (id)imageUID;
- (id)imageSubtitle;

@end
