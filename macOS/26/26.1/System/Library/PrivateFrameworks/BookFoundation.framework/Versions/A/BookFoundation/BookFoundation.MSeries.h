@class NSArray, NSString, NSURL, NSNumber;

@interface BookFoundation.MSeries : BookFoundation.MResource <BFMSeries> {
    void /* unknown type, empty encoding */ kind;
    void /* function */ name;
    void /* unknown type, empty encoding */ url;
}

@property (nonatomic, readonly) NSNumber *authorCount;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSArray *genres;
@property (nonatomic, readonly) BOOL isExplicit;
@property (nonatomic, readonly) NSArray *authorNames;
@property (nonatomic, readonly) BOOL hasUniqueAuthors;
@property (nonatomic, readonly) BOOL isOrdered;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) BOOL isBookSeries;
@property (nonatomic, readonly) BOOL isAudiobookSeries;

- (void).cxx_destruct;

@end
