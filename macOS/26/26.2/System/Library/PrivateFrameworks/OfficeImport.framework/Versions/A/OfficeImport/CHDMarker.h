@class OADGraphicProperties;

@interface CHDMarker : NSObject {
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}

- (void)setStyle:(int)a0;
- (void)setSize:(unsigned int)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)size;
- (int)style;
- (id)init;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)a0;

@end
