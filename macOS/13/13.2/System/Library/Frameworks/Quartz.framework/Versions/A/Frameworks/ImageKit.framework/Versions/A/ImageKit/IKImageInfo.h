@class NSArray, IKImageInfoView;

@interface IKImageInfo : NSObject {
    IKImageInfoView *_ikImageInfoView;
}

@property (retain) NSArray *ikImageInfoViewTLO;

- (id)textColor;
- (id)meta;
- (id)imageInfoView;
- (id)keyTextColor;

@end
