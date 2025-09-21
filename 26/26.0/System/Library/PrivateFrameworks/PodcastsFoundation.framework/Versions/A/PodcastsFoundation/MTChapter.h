@class NSString, NSData, NSNumber, MTEpisode;

@interface MTChapter : NSManagedObject

@property (nonatomic, retain) MTEpisode *episode;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSData *timeframesData;
@property (nonatomic) long long chapterTypeIntValue;
@property (nonatomic, retain) NSNumber *artworkWidth;
@property (nonatomic, retain) NSNumber *artworkHeight;
@property (nonatomic, copy) NSString *artworkTemplateURL;
@property (nonatomic, copy) NSString *artworkBackgroundColor;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
