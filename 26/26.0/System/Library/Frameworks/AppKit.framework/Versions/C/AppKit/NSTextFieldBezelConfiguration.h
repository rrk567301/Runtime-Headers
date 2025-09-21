@class NSColor, NSFont, NSAppearance;

@interface NSTextFieldBezelConfiguration : NSObject <NSCopying> {
    NSAppearance *_appearance;
}

@property (nonatomic) long long style;
@property (nonatomic) unsigned long long controlSize;
@property (nonatomic) long long interactionState;
@property (nonatomic) long long presentationState;
@property (nonatomic) double backingScaleFactor;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSAppearance *appearance;
@property (nonatomic) BOOL isFlipped;
@property (copy, nonatomic) NSFont *font;
@property (nonatomic) BOOL inTouchBar;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) BOOL hideText;
@property (nonatomic) long long semanticContext;

+ (id)neutralConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
