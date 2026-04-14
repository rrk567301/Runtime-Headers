@class NSString;

@interface IKInterfaceBuilderImage : NSObject {
    NSString *_path;
    NSString *_title;
    NSString *_subtitle;
}

- (unsigned long long)hash;
- (void)setPath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)imageRepresentation;
- (id)path;
- (void)dealloc;
- (id)imageRepresentationType;
- (id)imageTitle;
- (id)imageUID;
- (id)imageSubtitle;

@end
