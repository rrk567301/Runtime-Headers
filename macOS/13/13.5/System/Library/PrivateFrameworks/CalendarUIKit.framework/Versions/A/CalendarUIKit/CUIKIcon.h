@class NSDateComponents, NSCalendar;
@protocol CUIKIconGenerator;

@interface CUIKIcon : ISIcon

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) long long format;
@property (readonly, nonatomic) id<CUIKIconGenerator> iconGenerator;

- (void).cxx_destruct;
- (struct CGImage { } *)CGImageForImageDescriptor:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)imageForImageDescriptor:(id)a0;
- (void)prepareImagesForImageDescriptors:(id)a0;
- (void)getCGImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)initWithDateComponents:(id)a0 calendar:(id)a1 format:(long long)a2 forceNoTextEffects:(BOOL)a3;
- (id)initWithDate:(id)a0 calendar:(id)a1 format:(long long)a2;

@end
