@class NSCalendar, NSMutableDictionary, ISIcon, NSDateComponents;
@protocol CUIKIconGenerator;

@interface CUIKIcon : ISIcon

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) long long format;
@property (readonly, nonatomic) id<CUIKIconGenerator> iconGenerator;
@property (retain, nonatomic) ISIcon *internalIcon;
@property (retain, nonatomic) NSMutableDictionary *internalIcons;

- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)imageForDescriptor:(id)a0;
- (id)imageForImageDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)prepareImageForDescriptor:(id)a0;
- (void)prepareImagesForImageDescriptors:(id)a0;
- (id)initWithDate:(id)a0 calendar:(id)a1 format:(long long)a2;
- (id)_imageForDescriptor:(id)a0;
- (id)digestFromISImageDescriptor:(id)a0;
- (id)iconImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 appearance:(long long)a2 layers:(unsigned long long)a3;
- (id)initWithDateComponents:(id)a0 calendar:(id)a1 format:(long long)a2 forceNoTextEffects:(BOOL)a3;

@end
