@class WDParagraph;

@interface WDRun : NSObject

@property (readonly, weak) WDParagraph *paragraph;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)clearProperties;
- (id)initWithParagraph:(id)a0;
- (int)runType;

@end
