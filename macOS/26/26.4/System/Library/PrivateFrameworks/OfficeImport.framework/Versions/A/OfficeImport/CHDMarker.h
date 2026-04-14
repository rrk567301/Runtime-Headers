@class OADGraphicProperties;

@interface CHDMarker : NSObject {
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}

- (void)setStyle:(int)a0;
- (int)style;
- (void)setSize:(unsigned int)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (unsigned int)size;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)a0;

@end
