@class OADGraphicProperties;

@interface CHDMarker : NSObject {
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}

- (unsigned int)size;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)style;
- (void)setSize:(unsigned int)a0;
- (void)setStyle:(int)a0;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)a0;

@end
