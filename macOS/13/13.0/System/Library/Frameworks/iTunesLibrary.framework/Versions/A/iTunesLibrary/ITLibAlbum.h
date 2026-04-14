@class NSString, NSNumber, ITLibArtist;

@interface ITLibAlbum : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *sortTitle;
@property (nonatomic, getter=isCompilation) BOOL compilation;
@property (nonatomic) unsigned long long discCount;
@property (nonatomic) unsigned long long discNumber;
@property (nonatomic) long long rating;
@property (nonatomic, getter=isRatingComputed) BOOL ratingComputed;
@property (nonatomic, getter=isGapless) BOOL gapless;
@property (nonatomic) unsigned long long trackCount;
@property (copy, nonatomic) NSString *albumArtist;
@property (copy, nonatomic) NSString *sortAlbumArtist;
@property (retain, nonatomic) NSNumber *persistentID;
@property (retain, nonatomic) NSNumber *representativeItemPersistentID;
@property (readonly, retain, nonatomic) ITLibArtist *artist;

+ (id)albumWithDict:(id)a0;

- (void).cxx_destruct;

@end
