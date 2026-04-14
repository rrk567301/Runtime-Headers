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
- (id)imageFileTypes;
- (id)imagePasteboardTypes;
- (id)imageTypes;
- (id)imageUnfilteredFileTypes;
- (id)imageUnfilteredPasteboardTypes;
- (id)imageUnfilteredTypes;
- (id)namedImageSuffixExpression;
- (id)namedImageUnfilteredSuffixExpression;

@end
