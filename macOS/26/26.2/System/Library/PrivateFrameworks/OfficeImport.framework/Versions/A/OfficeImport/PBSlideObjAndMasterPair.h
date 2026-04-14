@class PDSlide;

@interface PBSlideObjAndMasterPair : NSObject {
    PDSlide *mSlide;
    int mMasterId;
}

+ (id)createPair:(id)a0 masterId:(int)a1;

- (void).cxx_destruct;
- (id)slide;
- (int)masterId;
- (void)setSlide:(id)a0 masterId:(int)a1;

@end
