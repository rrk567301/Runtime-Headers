@class WDParagraph;

@interface WDRun : NSObject

@property (readonly, weak) WDParagraph *paragraph;

- (id)description;
- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)clearProperties;
- (id)initWithParagraph:(id)a0;
- (int)runType;

@end
