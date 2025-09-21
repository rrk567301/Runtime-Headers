@class RWIProtocolDOMRGBAColor;

@interface RWIProtocolDOMGridOverlayConfig : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolDOMRGBAColor *gridColor;
@property (nonatomic) char showLineNames;
@property (nonatomic) char showLineNumbers;
@property (nonatomic) char showExtendedGridLines;
@property (nonatomic) char showTrackSizes;
@property (nonatomic) char showAreaNames;

- (id)initWithGridColor:(id)a0;

@end
