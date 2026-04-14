@class NSColor;

@interface WFPlatterConfiguration : NSObject

@property (nonatomic) BOOL blursBackground;
@property (retain, nonatomic) NSColor *backgroundColor;

+ (id)defaultConfiguration;

- (id)init;
- (void).cxx_destruct;

@end
