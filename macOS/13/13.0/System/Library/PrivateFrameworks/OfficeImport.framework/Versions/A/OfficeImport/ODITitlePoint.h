@class NSString;

@interface ODITitlePoint : ODIHorizonalList3 {
    NSString *mTitlePointPresentationName;
}

- (void).cxx_destruct;
- (void)mapRoofStyleFromPoint:(id)a0 shape:(id)a1;
- (void)mapOnePillarStyleFromPoint:(id)a0 shape:(id)a1;
- (void)mapBaseStyleFromPoint:(id)a0 shape:(id)a1;
- (id)initWithTitlePointPresentationName:(id)a0 state:(id)a1;

@end
