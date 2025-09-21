@class RWIProtocolDOMRGBAColor;

@interface RWIProtocolDOMFlexOverlayConfig : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolDOMRGBAColor *flexColor;
@property (nonatomic) char showOrderNumbers;

- (id)initWithFlexColor:(id)a0;

@end
