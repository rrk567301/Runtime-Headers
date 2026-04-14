@class AMPVideoDetailHeaderLockup;
@protocol MovieDetailLockupModel;

@interface MovieDetailLockup : NSTableCellView

@property (retain, nonatomic) AMPVideoDetailHeaderLockup *headerLockup;
@property (nonatomic) BOOL hideAccessories;
@property (nonatomic) double artworkAspect;
@property (retain, nonatomic) id<MovieDetailLockupModel> viewModel;

+ (id)lockup;

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (id)init;

@end
