@class SCRGuide;

@interface SCRGuideInfo : NSObject

@property (retain, nonatomic) SCRGuide *guide;
@property (nonatomic) unsigned long long selectionIndex;

- (void).cxx_destruct;
- (id)init;
- (id)initWithGuide:(id)a0 selectionIndex:(unsigned long long)a1;

@end
