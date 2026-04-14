@class WDParagraph;

@interface WDRun : NSObject

@property (readonly, weak) WDParagraph *paragraph;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)clearProperties;
- (int)runType;
- (id)initWithParagraph:(id)a0;

@end
