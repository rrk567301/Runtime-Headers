@class NSString, NSDateInterval;

@interface PGChapterTitle : NSObject

@property (readonly, nonatomic) NSString *localizedTitleString;
@property (readonly, nonatomic) NSDateInterval *chapterDateInterval;

- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithLocalizedTitleString:(id)a0 chapterDateInterval:(id)a1;

@end
