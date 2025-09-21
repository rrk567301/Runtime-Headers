@class NSString, NSNumber, NSDate;

@interface SPUISMusicResultBuilder : SPUISResultBuilder

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *album;
@property (retain, nonatomic) NSString *artist;
@property (retain, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSString *song;
@property (retain, nonatomic) NSNumber *songLengthInSeconds;
@property (nonatomic) BOOL isExplicit;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (id)stringWithAlbum:(id)a0 releaseDate:(id)a1;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildButtonItems;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildCompactCardSection;
- (id)buildDescriptions;
- (id)buildFootnote;
- (id)buildResult;
- (id)buildTitle;
- (unsigned long long)numberOfLinesForDescriptions;

@end
