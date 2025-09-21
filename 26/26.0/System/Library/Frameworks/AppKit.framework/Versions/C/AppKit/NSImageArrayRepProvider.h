@class NSString, NSArray;

@interface NSImageArrayRepProvider : NSObject <NSImageRepProvider, NSCopying> {
    NSArray *_reps;
}

@property (readonly) BOOL _isSymbolImage;
@property (readonly) NSString *symbolName;
@property (readonly) struct CGSize { double x0; double x1; } defaultSize;
@property (readonly) BOOL _isIconAppearanceSensitive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
