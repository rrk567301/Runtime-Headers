@class OADGraphicProperties;

@interface CHDMarker : NSObject {
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}

- (void)setSize:(unsigned int)a0;
- (id)init;
- (id)description;
- (void)setStyle:(int)a0;
- (int)style;
- (unsigned int)size;
- (void).cxx_destruct;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)a0;

@end
