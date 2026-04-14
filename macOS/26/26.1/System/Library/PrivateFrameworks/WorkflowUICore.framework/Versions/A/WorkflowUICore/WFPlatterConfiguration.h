@class NSColor;

@interface WFPlatterConfiguration : NSObject

@property (nonatomic) BOOL blursBackground;
@property (retain, nonatomic) NSColor *backgroundColor;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)init;

@end
