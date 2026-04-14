@class NSArray, NSRegularExpression;

@interface _NSImageTypeData : NSObject {
    NSArray *imageTypes;
    NSArray *imageFileTypes;
    NSArray *imagePasteboardTypes;
    NSRegularExpression *namedImageSuffixExpression;
    NSArray *imageUnfilteredTypes;
    NSArray *imageUnfilteredFileTypes;
    NSArray *imageUnfilteredPasteboardTypes;
    NSRegularExpression *namedImageUnfilteredSuffixExpression;
}

+ (void)initialize;

- (void)dealloc;
- (id)imageUnfilteredTypes;
- (id)imageUnfilteredFileTypes;
- (id)imageUnfilteredPasteboardTypes;
- (id)imageTypes;
- (id)imageFileTypes;
- (id)imagePasteboardTypes;
- (id)namedImageSuffixExpression;
- (id)namedImageUnfilteredSuffixExpression;

@end
