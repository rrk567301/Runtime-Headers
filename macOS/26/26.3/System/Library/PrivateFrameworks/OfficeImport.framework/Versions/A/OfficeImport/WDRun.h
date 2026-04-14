@class WDParagraph;

@interface WDRun : NSObject

@property (readonly, weak) WDParagraph *paragraph;

- (BOOL)isEmpty;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)clearProperties;
- (id)initWithParagraph:(id)a0;
- (int)runType;

@end
