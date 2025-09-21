@class NSString, NSDictionary, NSURL, NSUUID, NSArray;

@interface WBSCloudTab : NSObject <NSCopying, WBSCloudTabItem>

@property (nonatomic) char isShowingReader;
@property (copy, nonatomic) NSDictionary *readerScrollPositionDictionary;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic, getter=isPinned) char pinned;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentationForUserActivityUserInfo;
@property (readonly, copy, nonatomic) NSString *sceneID;
@property (readonly, copy, nonatomic) NSString *uuidString;
@property (readonly, nonatomic, getter=isShowingReader) char showingReader;
@property (readonly, nonatomic) double lastViewedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *titleForLastSearch;
@property (copy, nonatomic) NSArray *titleWords;
@property (readonly, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *URLStringForLastSearch;
@property (copy, nonatomic) NSArray *URLStringComponents;
@property (copy, nonatomic) NSString *lastSearchTerm;
@property (nonatomic) char matchedLastSearch;

+ (id)_dictionaryWithParameters:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithParameters:(id)a0;
- (char)hasSameUUIDAndURLAsTab:(id)a0;
- (id)initWithDictionaryFromUserActivityUserInfo:(id)a0;
- (id)initWithURL:(id)a0 uuid:(id)a1 title:(id)a2 isShowingReader:(char)a3 readerScrollPosition:(id)a4 isPinned:(char)a5;
- (id)initWithURL:(id)a0 uuid:(id)a1 title:(id)a2 isShowingReader:(char)a3 readerScrollPosition:(id)a4 sceneID:(id)a5;

@end
