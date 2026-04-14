@class NSString, NSArray;

@interface NSImageArrayRepProvider : NSObject <NSImageRepProvider, NSCopying> {
    NSArray *_reps;
}

@property (readonly) BOOL _isSymbolImage;
@property (readonly) struct CGSize { double x0; double x1; } defaultSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)recache;
- (id)bestRepresentationForImage:(id)a0 hints:(id)a1;
- (id)allRepresentationsForImage:(id)a0;
- (id)initWithRepresentations:(id)a0;

@end
