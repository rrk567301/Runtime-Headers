@class NSString, NSData, NSNumber;

@interface PodcastsFoundation.ServerChapter : _TtCs12_SwiftObject <MTFeedChapter, PodcastsFoundation.MediaObject> {
    void /* function */ id;
    void /* function */ type;
    void /* unknown type, empty encoding */ attributes;
    void /* unknown type, empty encoding */ meta;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSData *timeframesData;
@property (nonatomic, readonly) long long chapterTypeIntValue;
@property (nonatomic, readonly) NSNumber *artworkWidth;
@property (nonatomic, readonly) NSNumber *artworkHeight;
@property (nonatomic, readonly) NSString *artworkTemplateURL;
@property (nonatomic, readonly) NSString *artworkBackgroundColor;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *type;

@end
