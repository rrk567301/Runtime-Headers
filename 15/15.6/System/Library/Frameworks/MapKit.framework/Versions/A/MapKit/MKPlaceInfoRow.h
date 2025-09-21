@class MKPlaceSectionRowView;

@interface MKPlaceInfoRow : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) MKPlaceSectionRowView *rowView;
@property (nonatomic) char enable;
@property (nonatomic) char showIcon;

+ (id)infoRow:(id)a0 ofType:(unsigned long long)a1;

- (void).cxx_destruct;

@end
