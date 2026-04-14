@class NSString, NSDate;

@interface AMPDesktopUI.TracklistFooterLockupTestModel : NSObject <AMPDesktopUI.TracklistFooterLockupModel> {
    void /* unknown type, empty encoding */ releaseDate;
    void /* unknown type, empty encoding */ copyright;
}

@property (nonatomic) void /* unknown type, empty encoding */ trackCount;
@property (nonatomic) void /* unknown type, empty encoding */ totalTime;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, copy) NSString *copyright;
@property (nonatomic, retain) void /* unknown type, empty encoding */ badges;

+ (id)generateWithIncludeReleaseDate:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;

@end
