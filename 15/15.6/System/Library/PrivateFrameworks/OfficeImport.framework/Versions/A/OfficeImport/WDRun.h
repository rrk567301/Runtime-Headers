@class WDParagraph;

@interface WDRun : NSObject

@property (readonly, weak) WDParagraph *paragraph;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)clearProperties;
- (id)initWithParagraph:(id)a0;
- (int)runType;

@end
