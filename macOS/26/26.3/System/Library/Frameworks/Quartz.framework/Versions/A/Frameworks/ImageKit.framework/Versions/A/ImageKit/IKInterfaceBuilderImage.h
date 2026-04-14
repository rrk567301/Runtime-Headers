@class NSString;

@interface IKInterfaceBuilderImage : NSObject {
    NSString *_path;
    NSString *_title;
    NSString *_subtitle;
}

- (void)setPath:(id)a0;
- (id)path;
- (id)imageRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)imageRepresentationType;
- (id)imageTitle;
- (id)imageUID;
- (id)imageSubtitle;

@end
