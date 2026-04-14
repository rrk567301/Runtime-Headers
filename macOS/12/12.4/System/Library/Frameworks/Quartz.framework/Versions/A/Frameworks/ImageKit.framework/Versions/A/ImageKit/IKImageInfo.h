@class NSArray, IKImageInfoView;

@interface IKImageInfo : NSObject {
    IKImageInfoView *_ikImageInfoView;
}

@property (retain) NSArray *ikImageInfoViewTLO;

- (id)textColor;
- (id)imageInfoView;
- (id)meta;
- (id)keyTextColor;

@end
