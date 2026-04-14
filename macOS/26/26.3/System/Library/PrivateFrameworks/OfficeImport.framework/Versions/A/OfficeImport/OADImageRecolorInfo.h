@class NSDictionary;

@interface OADImageRecolorInfo : NSObject {
    NSDictionary *mColors;
    NSDictionary *mFills;
}

- (id)colors;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)fills;
- (id)initWithColors:(id)a0 fills:(id)a1;

@end
