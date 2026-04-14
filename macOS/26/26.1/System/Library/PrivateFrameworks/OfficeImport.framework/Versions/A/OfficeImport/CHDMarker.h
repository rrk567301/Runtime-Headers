@class OADGraphicProperties;

@interface CHDMarker : NSObject {
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}

- (void)setStyle:(int)a0;
- (unsigned int)size;
- (int)style;
- (id)description;
- (void).cxx_destruct;
- (void)setSize:(unsigned int)a0;
- (id)init;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)a0;

@end
