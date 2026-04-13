@class NSImage, NSString;

@interface AVPlaybackRate : NSObject {
    id _symbolImage;
}

@property (readonly, copy, nonatomic) NSImage *symbolImage;
@property (retain, nonatomic, setter=_setUIImage:) id _uiImage;
@property (readonly, nonatomic) double rate;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *compactLocalizedName;

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithRate:(double)a0 localizedName:(id)a1 compactLocalizedName:(id)a2;
- (id)initWithRate:(double)a0 localizedName:(id)a1 compactLocalizedName:(id)a2 symbolImage:(id)a3;

@end
