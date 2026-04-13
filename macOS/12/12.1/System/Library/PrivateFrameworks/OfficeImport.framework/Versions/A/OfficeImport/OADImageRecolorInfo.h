@class NSDictionary;

@interface OADImageRecolorInfo : NSObject {
    NSDictionary *mColors;
    NSDictionary *mFills;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)colors;
- (id)initWithColors:(id)a0 fills:(id)a1;
- (id)fills;

@end
