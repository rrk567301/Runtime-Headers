@class NSString, NSNumber, NSArray;

@interface PGMusicCurationSpecificationOptions : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *artist;
@property (readonly, copy, nonatomic) NSString *genre;
@property (readonly, copy, nonatomic) NSNumber *length;
@property (readonly, copy, nonatomic) NSArray *moods;
@property (readonly, nonatomic) BOOL isTrip;
@property (readonly, nonatomic) BOOL shouldDownloadKeyFlexSong;
@property (readonly, nonatomic) BOOL isQUEmpty;

+ (unsigned long long)PHMemoryMoodFromNumber:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOptionsDictionary:(id)a0;

@end
