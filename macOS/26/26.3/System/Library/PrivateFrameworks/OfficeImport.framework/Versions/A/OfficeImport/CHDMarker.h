@class OADGraphicProperties;

@interface CHDMarker : NSObject {
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}

- (void)setStyle:(int)a0;
- (id)description;
- (void)setSize:(unsigned int)a0;
- (id)init;
- (unsigned int)size;
- (int)style;
- (void).cxx_destruct;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)a0;

@end
