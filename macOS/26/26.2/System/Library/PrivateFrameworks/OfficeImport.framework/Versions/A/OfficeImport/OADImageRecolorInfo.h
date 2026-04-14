@class NSDictionary;

@interface OADImageRecolorInfo : NSObject {
    NSDictionary *mColors;
    NSDictionary *mFills;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)colors;
- (void).cxx_destruct;
- (id)description;
- (id)fills;
- (id)initWithColors:(id)a0 fills:(id)a1;

@end
