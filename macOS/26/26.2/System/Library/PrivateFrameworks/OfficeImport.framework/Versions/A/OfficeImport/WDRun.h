@class WDParagraph;

@interface WDRun : NSObject

@property (readonly, weak) WDParagraph *paragraph;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEmpty;
- (id)init;
- (void)clearProperties;
- (id)initWithParagraph:(id)a0;
- (int)runType;

@end
