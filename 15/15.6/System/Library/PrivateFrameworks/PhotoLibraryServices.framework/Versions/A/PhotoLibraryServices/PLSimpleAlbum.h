@class NSString, NSOrderedSet, NSArray, NSDate;

@interface PLSimpleAlbum : NSObject <PLAssetContainer> {
    NSString *_title;
    NSOrderedSet *_assets;
}

@property (readonly, retain, nonatomic) NSString *uuid;
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, retain, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) unsigned long long approximateCount;
@property (readonly, nonatomic) unsigned long long assetsCount;
@property (readonly, nonatomic) unsigned long long photosCount;
@property (readonly, nonatomic) unsigned long long videosCount;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) char canShowComments;
@property (readonly, nonatomic) char canShowAvalancheStacks;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)canPerformEditOperation:(unsigned long long)a0;
- (id)initWithTitle:(id)a0 assets:(id)a1;
- (long long)_countOfAssetType:(short)a0;

@end
