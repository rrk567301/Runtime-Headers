@class SCRElement;

@interface SCRSharedFocusJumpingInfo : NSObject

@property (readonly, nonatomic) SCRElement *startElement;
@property (readonly, nonatomic) SCRElement *endElement;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStartElement:(id)a0 endElement:(id)a1;

@end
