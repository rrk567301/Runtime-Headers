@class NSString;

@interface IKInterfaceBuilderImage : NSObject {
    NSString *_path;
    NSString *_title;
    NSString *_subtitle;
}

- (void)setPath:(id)a0;
- (void)dealloc;
- (id)imageRepresentation;
- (id)path;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)imageRepresentationType;
- (id)imageTitle;
- (id)imageUID;
- (id)imageSubtitle;

@end
