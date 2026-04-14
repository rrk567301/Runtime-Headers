@class NSString, NSDateInterval;

@interface PGChapterTitle : NSObject

@property (readonly, nonatomic) NSString *localizedTitleString;
@property (readonly, nonatomic) NSDateInterval *chapterDateInterval;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocalizedTitleString:(id)a0 chapterDateInterval:(id)a1;

@end
