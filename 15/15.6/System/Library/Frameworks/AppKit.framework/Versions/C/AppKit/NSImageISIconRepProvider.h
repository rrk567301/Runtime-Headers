@class NSString, ISIcon, NSArray;

@interface NSImageISIconRepProvider : NSObject <NSImageRepProvider> {
    ISIcon *_icon;
    NSArray *_representations;
}

@property (nonatomic) char allowPlaceholder;
@property (readonly) char _isSymbolImage;
@property (readonly) struct CGSize { double x0; double x1; } defaultSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
